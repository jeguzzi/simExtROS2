#py from parse_interfaces import *
#py interfaces = parse_interfaces(pycpp.params['interfaces_file'])
#py for interface_name, interface in interfaces.items():
#py if interface.tag == 'msg':
    else if(in->topicType == "`interface.full_name`")
    {
        if(in->latch == false)
        {
            rclcpp::QoS qos = 10;
            publisherProxy->publisher = node->create_publisher<`interface.cpp_type`>(in->topicName, qos);
        }
        else
        {
          rclcpp::QoS qos = in->queueSize;
          qos = qos.transient_local();
          publisherProxy->publisher = node->create_publisher<`interface.cpp_type`>(in->topicName, qos);
        }

    }
#py endif
#py endfor
