//c includes
#include <QPushButton>
#include <QRadioButton>
#include <QString>
#include <stdio.h>
#include <stdlib.h>

extern "C"{
#include "msiklm.h"
}

//c++/qt includes
#include <string>
#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->leftGreenBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->leftRedBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->leftPinkBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->leftBlueBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->leftYellowBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->leftSkyBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->leftOrangeBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->leftWhiteBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->middleGreenBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->middleRedBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->middlePinkBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->middleBlueBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->middleYellowBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->middleSkyBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->middleOrangeBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->middleWhiteBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->rightGreenBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->rightRedBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->rightPinkBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->rightBlueBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->rightYellowBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->rightSkyBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->rightOrangeBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->rightWhiteBox, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->modeNormal, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->modeGaming, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->modeBreathe, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->modeDemo, &QRadioButton::clicked, this, &MainWindow::submitPattern);
    connect(ui->modeWave, &QRadioButton::clicked, this, &MainWindow::submitPattern);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//the following macros can be used for colored text output
#ifndef _WIN32
    #define KDEFAULT "\033[0m"
    #define KNRM     "\x1B[0m"
    #define KRED     "\x1B[31m"
    #define KGRN     "\x1B[32m"
    #define KYEL     "\x1B[33m"
    #define KBLU     "\x1B[34m"
    #define KMAG     "\x1B[35m"
    #define KCYN     "\x1B[36m"
    #define KWHT     "\x1B[37m"
#else
    #define KDEFAULT ""
    #define KNRM     ""
    #define KRED     ""
    #define KGRN     ""
    #define KYEL     ""
    #define KBLU     ""
    #define KMAG     ""
    #define KCYN     ""
    #define KWHT     ""
#endif

/**
 * @brief prints help information
 */
void MainWindow::show_help()
{
    printf(KRED
            "MSIKLM - MSI Keyboard Light Manager\n"
            "###################################\n"
           KYEL
            "\n"
            "utility to configure the SteelSeries keyboard in MSI Gaming Notebooks - possible arguments:\n"
            "\n"
           KMAG
            "help\n"
           KDEFAULT
            "    show this help\n"
            "\n"
           KMAG
            "test\n"
           KDEFAULT
            "    test if a compatible SteelSeries MSI Gaming Notebook is detected\n"
            "\n"
           KMAG
            "list\n"
           KDEFAULT
            "    list all found HID devices\n"
            "\n"
           KMAG
            "<color> OR <color_left>,<color_middle>[,<color_right>,<color_logo>,<color_front_left>,<color_front_right>,<color_mouse>]\n"
           KDEFAULT
            "    sets a color for the respective zone at full brightness;\n"
            "    if multiple values are supplied, they have to be separated with commas without spaces,\n"
            "    e.g. red or red,green,blue are valid while red,green, blue or red, green, blue are not\n"
            "    it is valid to supply three times the same value, but the result will be the same as supplying it only once\n"
            "    valid predefined colors are: none, off (equivalent to none), red, orange, yellow, green, sky, blue, purple, white\n"
            "    additionally it is possible to supply a color in full RGB notation; in this case it has to be supplied either in the format\n"
            "    [red;green;blue] where the brackets are required and 'red', 'green' and 'blue' are the respective color values (range 0 to 255)\n"
            "    or in hex code (0x000000 to 0xFFFFFF) notations where the respective values have to be selected accordingly\n"
            "    it is also supported to mix the predefined colors with explicit definitions\n"
            "    please note that it might be necessary to put quotation marks around explicit color definitions,\n"
            "    otherwise the argument might not be properly processed by the shell; cf. Readme.md for more detailed information\n"
            "    remark: to disable the illumination, use off or none as global color\n"
            "\n"
           KMAG
            "<colors> <brightness>\n"
           KDEFAULT
            "    additionally to the color, also a brightness can be specified for all zones where a predefined color is used;\n"
            "    thus, the respective brightness selection will be ignored for all zones where a custom rgb selection has been given\n"
            "    so valid brightnesses are 'low', 'medium', 'high' and 'rgb' where 'rgb' is the default value\n"
            "    important: as soon as a brightness has been set, a different command is used, so it might solve problems to explicitly define it\n"
            "\n"
           KMAG
            "<colors> <mode>\n"
           KDEFAULT
            "    sets the respective zone's color(s) and activates the specified mode\n"
            "    mode is one of the following effects: normal, gaming, breathe, demo, wave\n"
            "\n"
           KMAG
            "<colors> <brightness> <mode>\n"
           KDEFAULT
            "    simultaneously sets the respective zone's color(s) with a specified brightness and a mode\n"
            "\n"
           KMAG
            "<mode>\n"
           KDEFAULT
            "    only set a mode and keep the colors unchanged\n"
    );
}

void MainWindow::enumerate_hid()
{
    struct hid_device_info* enumerate = hid_enumerate(0,0);

    if (enumerate != nullptr)
    {
        struct hid_device_info* dev = enumerate;
        while (dev != nullptr)
        {
            printf("Device: %ls\n", dev->product_string); //%S to %ls
            printf("    Device Vendor ID:        %i\n", dev->vendor_id);
            printf("    Device Product ID:       %i\n", dev->product_id);
            printf("    Device Serial Number:    %ls\n", dev->serial_number);
            printf("    Device Manufacturer:     %ls\n", dev->manufacturer_string);
            printf("    Device Path:             %s\n", dev->path);
            printf("    Device Interface Number: %i\n", dev->interface_number);
            printf("    Device Release Number:   %d\n", dev->release_number);
            printf("\n");
            dev = dev->next;
        }
        hid_free_enumeration(enumerate);
    }
    else
    {
        printf("No HID device found!\n");
    }
}

void MainWindow::on_parse_error(const char *value, const char *expected_type)
{
    QString qvalue = value;
    QString qexpected_type = expected_type;
    //Show possible errors in the gui status bar
    if (value == nullptr)
        ui->statusbar->showMessage("Invalid arguments supplied; use 'msiklm help' to show a list of valid arguments\n");
    else if (expected_type == nullptr)
        ui->statusbar->showMessage("Invalid argument '" + qvalue + "' - use 'msiklm help' to list an overview of valid commands\n");
    else
        ui->statusbar->showMessage("Invalid " + qexpected_type + " argument '" + qvalue + "' - use 'msiklm help' to list an overview of valid commands\n" );
}


brightness parse_check_brightness(const char* brightness_str, bool with_rgb)
{
    brightness br = parse_brightness(brightness_str);
   if (static_cast<int>(br) >= 0 && with_rgb && (br == high || br == medium || br == low))
   {
       //switch_on_parse_error(brightness_str, "rgb-color brightness");
       int i = -2;
       br = static_cast<brightness>(i);
   }
   return br;
}

//left it as it is just as a main control function ported to c++ standards
int MainWindow::mainControl(int argc, char** argv)
{
    //the color values (at most 7); num_regions tracks the actual number of parsed colors (i.e. regions to set) while with_rgb indicates if there is any rgb-color used
    struct color colors[7];
    int num_regions = 0;
    bool with_rgb = false;
    int ret = argc > 1 ? hid_init() : -1;

    //if colors are supplied, they are always the first argument, so try to parse them
    if (ret == 0)
    {
        size_t length = strlen(argv[1]);
        char* color_arg = static_cast<char*>(malloc((length+1) * sizeof(char)));
        strcpy(color_arg, argv[1]);
        color_arg[length] = '\0';

        char* saved_ptr = nullptr;
        const char* color_str = strtok_r(color_arg, ",", &saved_ptr);
        while (color_str != nullptr && ret == 0) //parse into next color slot as long as a color is available for parsing (color_str != NULL) and previous parsing succeeded (ret == 0)
        {
            if (num_regions < 7 &&
                !(ret = parse_color(color_str, &(colors[num_regions]))))
            {
                if (colors[num_regions].profile == custom)
                    with_rgb = true;
                ++num_regions;
                color_str = strtok_r(nullptr, ",", &saved_ptr);
            }
            else
            {
                ret = -1;
            }
        }
        free(color_arg);
    }

    //the brightness and the mode; initialize them according to the parsed command line arguments
    int casting1 = ret == 0 ? rgb : -1;
    brightness br = static_cast<brightness>(casting1);
    int casting2 = ret == 0 ? normal : -1;
    mode md = static_cast<mode>(casting2);

    //it holds: if ret == 0, the num_regions color values are all valid (and will be set) or brightness and mode are -1 (colors will not be modified, only maybe the mode)

    switch (argc)
    {
        case 2:
            // only one command line argument; valid values are:
            //  '<color>' -> set the respective color(s)
            //  '<mode>'  -> set the respective mode
            //  'help'    -> show the help
            //  'test'    -> try to find a compatible SteelSeries MSI Gaming Notebook
            //  'list'    -> list all found HID devices

            if (ret != 0) //nothing to do if colors are parsed successfully
            {
                md = parse_mode(argv[1]);
                if (static_cast<int>(md) >= 0)
                {
                    ret = 0;
                }
                else //invalid mode: check for 'help', 'test' or 'list'
                {
                    switch (argv[1][0])
                    {
                        case 'h':
                            if (strcmp(argv[1], "help") == 0)
                            {
                                show_help();
                                ret = 0;
                            }
                            break;

                        case 't':
                            if (strcmp(argv[1], "test") == 0)
                            {
                                if (keyboard_found())
                                    ui->statusbar->showMessage("Compatible keyboard found!\n");
                                else
                                    ui->statusbar->showMessage("No compatible keyboard found!\n" );

                                ret = 0;
                            }
                            break;

                        case 'l':
                            if (strcmp(argv[1], "list") == 0)
                            {
                                enumerate_hid();
                                ret = 0;
                            }
                            break;
                    }

                    if (ret != 0)
                        on_parse_error(argv[1], nullptr);
                }
            }
            break;

        case 3:
            // two command line arguments; valid inputs are:
            // '<color> <brightness>' -> set the respective color(s) and brightness
            // '<color> <mode>'       -> set the respective color(s) and mode

            if (ret == 0)
            {
                enum brightness b = parse_check_brightness(argv[2], with_rgb);
                if (static_cast<int>(b) >= 0)
                {
                    br = b;
                }
                else if (static_cast<int>(b) >= -1)
                {
                    enum mode m = parse_mode(argv[2]);
                    if (static_cast<int>(m) >= 0)
                    {
                        md = m;
                    }
                    else
                    {
                        on_parse_error(argv[2], "brightness / mode");
                        ret = -1;
                    }
                }
                else
                {
                    ret = -1;
                }
            }
            else
            {
                on_parse_error(argv[1], "color");
                ret = -1;
            }
            break;

        case 4:
            // three command line arguments; valid input is only <color> <brightness> <mode>

            if (ret == 0)
            {
                br = parse_check_brightness(argv[2], with_rgb);
                if (static_cast<int>(br) >= 0)
                {
                    md = parse_mode(argv[3]);
                    if (static_cast<int>(md) < 0)
                    {
                        on_parse_error(argv[3], "mode");
                        ret = -1;
                    }
                }
                else
                {
                    if (static_cast<int>(br) >= -1)
                        on_parse_error(argv[2], "brightness");
                    ret = -1;
                }
            }
            else
            {
                on_parse_error(argv[1], "color");
                ret = -1;
            }
            break;

        default:
            // too many or no command line arguments
            on_parse_error(nullptr, nullptr);
            break;
    }

    if (ret == 0 && static_cast<int>(md) >= 0)
    {
        hid_device* dev = open_keyboard();

        if (dev != nullptr)
        {
            if (num_regions == 1 && md != gaming) //special case: one color will be used for the first three regions (gaming mode requires only one region)
            {
                colors[2] = colors[1] = colors[0];
                num_regions = 3;
            }

            for (int i=0; i < num_regions && ret == 0; ++i)

                if ( ::set_color(dev, colors[i], static_cast<region>(i+1), br) <= 0)
                {
                    int retCast = -1;
                    ret = static_cast<mode>(retCast);
                }

            if (ret == 0 && set_mode(dev, md) <= 0)
                ret = -1;

            hid_close(dev);
        }
        else
        {
            printf("No compatible keyboard found!\n");
            ret = -1;
        }

        if (hid_exit() != 0)
            ret = -1;
    }

    return ret;
}

//Button Slots
void MainWindow::on_buttonGreen_clicked()
{
    ui->leftGreenBox->setChecked(true);
    ui->middleGreenBox->setChecked(true);
    ui->rightGreenBox->setChecked(true);
    submitPattern(ui->dial->value());
}

void MainWindow::on_buttonRed_clicked()
{
    ui->leftRedBox->setChecked(true);
    ui->middleRedBox->setChecked(true);
    ui->rightRedBox->setChecked(true);
    submitPattern(ui->dial->value());
}

void MainWindow::on_buttonPink_clicked()
{
    ui->leftPinkBox->setChecked(true);
    ui->middlePinkBox->setChecked(true);
    ui->rightPinkBox->setChecked(true);
    submitPattern(ui->dial->value());
}

void MainWindow::on_buttonBlue_clicked()
{
    ui->leftBlueBox->setChecked(true);
    ui->middleBlueBox->setChecked(true);
    ui->rightBlueBox->setChecked(true);
    submitPattern(ui->dial->value());
}

void MainWindow::on_buttonYellow_clicked()
{
    ui->leftYellowBox->setChecked(true);
    ui->middleYellowBox->setChecked(true);
    ui->rightYellowBox->setChecked(true);
    submitPattern(ui->dial->value());
}

void MainWindow::on_buttonSky_clicked()
{
    ui->leftSkyBox->setChecked(true);
    ui->middleSkyBox->setChecked(true);
    ui->rightSkyBox->setChecked(true);
    submitPattern(ui->dial->value());
}

void MainWindow::on_buttonOrange_clicked()
{
    ui->leftOrangeBox->setChecked(true);
    ui->middleOrangeBox->setChecked(true);
    ui->rightOrangeBox->setChecked(true);
    submitPattern(ui->dial->value());
}

void MainWindow::on_buttonWhite_clicked()
{
    //https://stackoverflow.com/a/1519997
    ui->leftWhiteBox->setChecked(true);
    ui->middleWhiteBox->setChecked(true);
    ui->rightWhiteBox->setChecked(true);
    submitPattern(ui->dial->value());
}

void MainWindow::on_buttonTest_clicked()
{
        char arg0[] = "msiklm";
        char arg1[] = "test";
        char* argv[] = {&arg0[0], &arg1[0], nullptr};
        int argc = static_cast<int>(sizeof(argv) / sizeof(argv[0]) -1);

        mainControl(argc, &argv[0]);
}


void MainWindow::on_dial_valueChanged(int value)
{
    submitPattern(value);
}

void MainWindow::submitPattern(int value)
{
    //Radio Buttons
        QByteArray left("green");
        QByteArray middle("green");
        QByteArray right("green");
        QByteArray comma(",");

        if(ui->leftGreenBox->isChecked()== true)
        left.replace(0,left.size(),"green");
        else if(ui->leftRedBox->isChecked() == true)
        left.replace(0,left.size(),"red");
        else if(ui->leftPinkBox->isChecked() == true)
        left.replace(0,left.size(),"purple");
        else if(ui->leftBlueBox->isChecked() == true)
        left.replace(0,left.size(),"blue");
        else if(ui->leftYellowBox->isChecked() == true)
        left.replace(0,left.size(),"yellow");
        else if(ui->leftSkyBox->isChecked() == true)
        left.replace(0,left.size(),"sky");
        else if(ui->leftOrangeBox->isChecked() == true)
        left.replace(0,left.size(),"orange");
        else if(ui->leftWhiteBox->isChecked() == true)
        left.replace(0,left.size(),"white");

        if(ui->middleGreenBox->isChecked()== true)
        middle.replace(0,middle.size(),"green");
        else if(ui->middleRedBox->isChecked() == true)
        middle.replace(0,middle.size(),"red");
        else if(ui->middlePinkBox->isChecked() == true)
        middle.replace(0,middle.size(),"purple");
        else if(ui->middleBlueBox->isChecked() == true)
        middle.replace(0,middle.size(),"blue");
        else if(ui->middleYellowBox->isChecked() == true)
        middle.replace(0,middle.size(),"yellow");
        else if(ui->middleSkyBox->isChecked() == true)
        middle.replace(0,middle.size(),"sky");
        else if(ui->middleOrangeBox->isChecked() == true)
        middle.replace(0,middle.size(),"orange");
        else if(ui->middleWhiteBox->isChecked() == true)
        middle.replace(0,middle.size(),"white");

        if(ui->rightGreenBox->isChecked()== true)
        right.replace(0,right.size(),"green");
        else if(ui->rightRedBox->isChecked() == true)
        right.replace(0,right.size(),"red");
        else if(ui->rightPinkBox->isChecked() == true)
        right.replace(0,right.size(),"purple");
        else if(ui->rightBlueBox->isChecked() == true)
        right.replace(0,right.size(),"blue");
        else if(ui->rightYellowBox->isChecked() == true)
        right.replace(0,right.size(),"yellow");
        else if(ui->rightSkyBox->isChecked() == true)
        right.replace(0,right.size(),"sky");
        else if(ui->rightOrangeBox->isChecked() == true)
        right.replace(0,right.size(),"orange");
        else if(ui->rightWhiteBox->isChecked() == true)
        right.replace(0,right.size(),"white");

        QByteArray combined(",");//,
        combined.prepend(left); //colorLeft,
        combined.append(middle);//colorLeft,colorMiddle
        combined.append(",");	//colorLeft,colorMiddle,
        combined.append(right);	//colorLeft,colorMiddle,colorRight

        //Brightness Dial pad
        QByteArray brightness("low");
        QByteArray setBrightness("low");
        if(ui->dial->value() == 0)
            setBrightness.replace(0,setBrightness.size(), "off");
        else if(ui->dial->value() == 1)
            setBrightness.replace(0,setBrightness.size(), "low");
        else if(ui->dial->value() == 2)
            setBrightness.replace(0,setBrightness.size(), "medium");
        else if(ui->dial->value() == 3)
            setBrightness.replace(0,setBrightness.size(), "high");

        brightness.replace(0,setBrightness.size(),setBrightness);


        //Mode Radio Buttons
        QByteArray modi("wave");
        QByteArray modiSelection("wave");
        if (ui->modeWave->isChecked() == true)
            modiSelection.replace(0,modiSelection.size(), "wave");
        else if(ui->modeDemo->isChecked() == true)
            modiSelection.replace(0,modiSelection.size(), "demo");
        else if(ui->modeGaming->isChecked() == true)
            modiSelection.replace(0,modiSelection.size(), "gaming");
        else if(ui->modeNormal->isChecked() == true)
            modiSelection.replace(0,modiSelection.size(), "normal");
        else if(ui->modeBreathe->isChecked() == true)
            modiSelection.replace(0,modiSelection.size(), "breathe");

        modi.replace(0,modiSelection.size(),modiSelection);

        //Creating pointer array to pass them to the mainControl(argc,argv) function as argc int
        //and argv pointer array - that way the program even works via cli like it suppose to work

        char arg0[] = "msiklm";
        char* argv[] = {&arg0[0], combined.data(), brightness.data(), modi.data(), nullptr};
        int argc = static_cast<int>(sizeof(argv) / sizeof(argv[0]) -1);
        mainControl(argc, &argv[0]);
        //https://stackoverflow.com/a/1519997

        //ui statusbar output for
        QString output = argv[0];
        output += " ";
        output += argv[1];
        output += " ";
        output += argv[2];
        output += " ";
        output += argv[3];

        ui->statusbar->showMessage(output);
}
