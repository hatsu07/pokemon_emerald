	@ data/maps/SlateportCity/scripts.inc:1120 SlateportCity_Text_SternSaysDiscoveredSomething
	.globl gText_Rom_1DD106
gText_Rom_1DD106: @ 0x081DD106
	.string "クスノキかんちょうは うみの そこで\nなにかを はっけん したんだって!\pなんだろなー? なんだろなー?$"
	.if (. - gText_Rom_1DD106) > 0x35
	.error "gText_Rom_1DD106 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD106) < 0x35
	.space 0x35 - (. - gText_Rom_1DD106)
	.endif
