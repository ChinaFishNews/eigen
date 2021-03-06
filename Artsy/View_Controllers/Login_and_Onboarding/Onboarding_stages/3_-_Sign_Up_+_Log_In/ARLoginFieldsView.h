#import <UIKit/UIKit.h>

@class ARTextFieldWithPlaceholder, ARSecureTextFieldWithPlaceholder;


@interface ARLoginFieldsView : UIView

@property (nonatomic, strong, readonly) ARTextFieldWithPlaceholder *nameField;
@property (nonatomic, strong, readonly) ARTextFieldWithPlaceholder *emailField;
@property (nonatomic, strong, readonly) ARSecureTextFieldWithPlaceholder *passwordField;

- (void)setupForLogin;
- (void)setupForSignUp;

@end
