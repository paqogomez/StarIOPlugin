/********* StarPrinter.m Cordova Plugin Implementation *******/

#import <Foundation/Foundation.h>
#import <Cordova/CDV.h>
#import <StarIO/SMPort.h>


@interface StarPrinter : CDVPlugin {
  // Member variables go here.
}

- (void)findDevices:(CDVInvokedUrlCommand*)command;

- (void)print:(CDVInvokedUrlCommand*)command;

- (void)echo:(CDVInvokedUrlCommand*)command;

@end

