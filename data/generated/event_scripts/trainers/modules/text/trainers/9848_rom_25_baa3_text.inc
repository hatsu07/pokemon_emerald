	@ data/text/trainers.inc:905 Route111_Text_DrewDefeat (+1 aliases)
	.globl gText_Rom_25BAA3
gText_Rom_25BAA3: @ 0x0825BAA3
	.string "ゴーゴーゴーグルで まわりが\nよく わからなかったよ{EOS}"
	.if (. - gText_Rom_25BAA3) > 0x1b
	.error "gText_Rom_25BAA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BAA3) < 0x1b
	.space 0x1b - (. - gText_Rom_25BAA3)
	.endif
