/* vi:set ts=8 sts=4 sw=4 ft=objc:
 *
 * VIM - Vi IMproved		by Bram Moolenaar
 *				MacVim GUI port by Bjorn Winckler
 *
 * Do ":help uganda"  in Vim to read copying and usage conditions.
 * Do ":help credits" in Vim to see a list of people who contributed.
 * See README.txt for an overview of the Vim source code.
 */

#import <Cocoa/Cocoa.h>


@interface MMTextView : NSTextView {
    BOOL                shouldDrawInsertionPoint;
    NSEvent             *lastMouseDownEvent;
    NSTrackingRectTag   trackingRectTag;
    BOOL                isDragging;
    BOOL                isAutoscrolling;
    int                 dragRow;
    int                 dragColumn;
    int                 dragFlags;
    NSPoint             dragPoint;
    int                 insertionPointRow;
    int                 insertionPointColumn;
    int                 insertionPointShape;
    int                 insertionPointFraction;
    NSTextField         *markedTextField;
}

- (NSEvent *)lastMouseDownEvent;
- (void)setShouldDrawInsertionPoint:(BOOL)on;
- (void)drawInsertionPointAtRow:(int)row column:(int)col shape:(int)shape
                       fraction:(int)percent color:(NSColor *)color;
- (void)hideMarkedTextField;

@end
