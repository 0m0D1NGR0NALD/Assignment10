# Strict Instructions on Uploading your solutions:
* **You Must Follow the File structure Provided**
*  Upload the Classes code in main.h
*  Upload the main logic in main.hpp

# Homework: Implementing Interfaces and Practicing Polymorphism

*Due Date: Friday 17th of November, end of day*<br>

# Homework Exercise 1: Define Interfaces<br>

**Objective:** *Develop foundational interfaces to be used in a smart home system.*<br>

1. Define a **MediaControlInterface** with the following purely virtual functions:<br>
• virtual void play() = 0;<br>
• virtual void pause() = 0;<br>
• virtual void stop() = 0;<br>

2. **Define a NetworkCommunicationInterface with the following purely virtual functions:**<br>
• virtual void connectToNetwork() = 0;<br>
• virtual void disconnectFromNetwork() = 0;<br>
• virtual void sendData(const std::string& data) = 0;<br>

# Homework Exercise 2: Implement a Controller Class<br>

**Objective:** *Create a controller class that uses objects through the defined interfaces.*<br>

1. Implement a **SmartHomeController** class with methods to manage media and network devices. It should have private vectors **std::vector<MediaControlInterface*> _media_devices** and **std::vector<NetworkCommunicationInterface*> _network_devices** that store pointer to the devices in the house. It should also have the following methods<br>
• **void addMediaDevice(MediaControlInterface device)**; which should add a media device to the controller.<br>
• **void addNetworkDevice(NetworkCommunicationInterface device)**; which should add a network device to the controller.<br>
• **void controlAllMediaDevices()**; this function is a dummy-implementation (in a realistic scenario this function would control the registered devices) that should just iterate through all the media devices and call some of the functions (like play(), pause(), stop())<br>
• **void manageNetworkDevices()**; this function is similar to the **controlAllMediaDevices()** function and should iterate through the network devices and call their functions.<br>

# Homework Exercise 3: Create Derived Classes<br>

**Objective:** Develop concrete classes that implement the interfaces.<br>

1. Implement a **SmartSpeaker** class that inherits from **MediaControlInterface** with the following functions:<br>
• void play() override;<br>
• void pause() override;<br>
• void stop() override;<br>
These function are again dummy implementation and should only print out one string such as "SmartSpeaker is playing" or "SmartSpeaker is paused".<br>

2. Implement a **WiFiAdapter** class that inherits from **NetworkCommunicationInterface**
with the following functions:<br>
• void connectToNetwork() override;<br>
• void disconnectFromNetwork() override;<br>
• void sendData(const std::string& data) override;<br>
As above, these are dummy implementations are dummy-implementations are are only meant to print out some<br>

# Homework Exercise 4: Demonstrate Polymorphism<br>

**Objective:** Show the power of polymorphism in action.<br>

1. Write a **main()** function to demonstrate the use of polymorphism in
controlling different device types through a **SmartHomeController**.<br>
