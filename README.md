# AmigaGPT

AmigaGPT is a text generation program that runs on the classic AmigaOS. Utilising the power of the OpenAI's GPT-3 and GPT-4 architectures, this program brings state-of-the-art language modeling to your Amiga computer.

## Features

- ### State-of-the-art language model

**AmigaGPT** uses the GPT-4 architecture developed by OpenAI to generate coherent, context-aware responses to your input.

- ### Seamless integration with AmigaOS

AmigaGPT takes full advantage of the latest AmigaOS 3.2 API to provide a smooth, native user experience without the need to have third party frameworks installed.

- ### UI customisation

You can customise the look and feel of the application, including the ability to choose the fonts and a choice of opening in the Workbench screen or a custom screen.

- ### Speech capability

**AmigaGPT** can use the Amiga's speech synthesis capability to read the generated text aloud with support for switching between the old Workbench 1.x **v34** and the Workbench 2.0 **v37** speech synthesisers.

## System Requirements

Ensure you have the necessary system requirements:
- An **Amiga** with **AmigaOS 3.2** or higher
- Internet access using a TCP/IP stack such as **Roadshow** (http://roadshow.apc-tcp.de/index-en.php)
- **AmiSSL 5.8** or higher (http://aminet.net/util/libs/AmiSSL-5.8-OS3.lha)
- An **OpenAI account** with an active **API key**
- *Optional*: A copy of the **Workbench 1.x** disk to install `narrator.device` **v34** and a copy of the **Workbench 2.0** disk to install `narrator.device` **v37**
## Installation
* Download the latest release of **AmigaGPT**
* Extract the `amigagpt.lha` archive to your desired location

## *Optional steps to enable speech functionality*
**AmigaGPT** supports reading the output aloud. This requires a file called `narrator.device` which cannot be included with **AmigaGPT** because it is still under copyright. Therefore, you must copy this file legally from your Workbench disks so that **AmigaGPT** will be able to synthesise speech. There are 2 versions of `narrator.device` supported, **v34** and **v37**. 

**v34** is the original version that came with Workbench 1.x. **v37** was an updated version included with Workbench 2.0.x. It has more features and sounds more natural, however it does sound quite different which is why **AmigaGPT** supports you installing both versions and your choice of version to be used can be selected in the **Speech** menu in the app.

Regardless of which version of `narrator.device` you choose to install (or both), **AmigaGPT** requires that you install the free third party `translator.library` **v43**. This works with both versions of `narrator.device`.

### Installing `translator.library` **v43**
Since `translator.library` **v43** is not available as a standalone install, you will need to install **v42** and then patch it to **v43**.
* Download http://aminet.net/util/libs/translator42.lha and extract the archive to any convenient location on your Amiga such as `RAM:`
* Navigate to that directory and double click the `Install` program
* Run the installer using all the default settings
* Download http://aminet.net/util/libs/Tran43pch.lha and once again extract it to a location of your choice
* Navigate to that directory and double click the `Install` program
* Run the installer using all the default settings


### Installing `narrator.device` **v34**
* Insert your Workbench 1.x disk and copy `df0:devs/narrator.device` to `{AmigaGPTProgramDirectory}/devs/speech/34`

### Installing `narrator.device` **v37**
* Insert your Workbench 2.0.x (you cannot use 2.1 because the speech libraries were removed after version 2.0.4) disk and copy `df0:devs/narrator.device` to `{AmigaGPTProgramDirectory}/devs/speech/37`

## Launching **AmigaGPT**
* Launch the application by double-clicking the AmigaGPT icon
* You may also launch the app in the command line but before you do, run the command `STACK 20000` to give the program 20kb of stack since the default stack size for apps launched from the shell is 4kb and this is not enough for **AmigaGPT** and will cause random crashes due to stack overflow. This is not required when you lauch the app by double clicking the icon since the stack size is saved in the icon

## Usage

When launched, **AmigaGPT** presents you with a choice of opening the app in a new screen or opening in Workbench. If you open in a new screen you have the ability to create a screen for the app to open in. **AmigaGPT** supports anything from **320x200** all the way up to **4k** resolution if using a video card for RTG. Bear in mind text will appear very tiny in resolutions above **1080p** so you may want to increase the font size settings from the **View** menu when the app opens.

When the app has opened, you are presented with a text input box. You can type any prompt into this box and press "**Send**" to see the GPT-4 model's response. The generated text appears in the box above the input. You can choose to have this text read aloud using the "**Speech**" menu option. You can also select which model for OpenAI to use in the "**OpenAI**" menu option.

To the left of the chat box is a conversation list which you can use to go to another saved conversation. New conversations can be created with the "**New chat**" button.

In the "**Edit**" menu, you'll find basic text editing commands like Cut, Copy, Paste, Clear, and Select All. The "**View**" menu allows you to change the font used in the chat and the UI.

The "**Project**" menu includes an "**About**" option, which displays information about the program, and a "**Preferences**" option where you can configure application-wide settings.

## Developing
If you would like to build this project from source you will need Bebbo's **amiga-gcc** toolchain here https://github.com/bebbo/amiga-gcc
Be sure to add `NDK=3.2` to the `make` options. Once your `amiga-gcc` dev environment is installed, you will need to download the AmiSSL and Translator SDK's from http://aminet.net/util/libs/AmiSSL-5.8-SDK.lha & http://aminet.net/util/libs/translator42.lha and extract the include header files into your `amiga-gcc` environment. By default this will be located at `/opt/amiga/m68k-amigaos/include`. Once this is set up all you will need to do to build the project is navigate to the project root directory and run the `make` command. The built app will appear in the `out` directory.

## License

**AmigaGPT** is licensed under the MIT License.

## Contributing

We welcome contributions to **AmigaGPT**! If you have a bug to report, a feature to suggest, or a change you'd like to make to the code, please open a new issue or submit a pull request.