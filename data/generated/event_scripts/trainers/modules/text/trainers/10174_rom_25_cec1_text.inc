	@ data/text/trainers.inc:1376 Route114_Text_NolanDefeat (+1 aliases)
	.globl gText_Rom_25CEC1
gText_Rom_25CEC1: @ 0x0825CEC1
	.string "しょうぶは すき だが\nつよい わけじゃ ないんだ……$"
	.if (. - gText_Rom_25CEC1) > 0x1c
	.error "gText_Rom_25CEC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CEC1) < 0x1c
	.space 0x1c - (. - gText_Rom_25CEC1)
	.endif
