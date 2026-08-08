	@ data/maps/MagmaHideout_4F/scripts.inc:141 MagmaHideout_4F_Text_Grunt12Intro (+1 aliases)
	.globl gText_Rom_21CA92
gText_Rom_21CA92: @ 0x0821CA92
	.string "ふはは もうすぐ! もうすぐだ!\nオレたちの もくてきが じつげん する!"
	.byte EOS
	.if (. - gText_Rom_21CA92) > 0x26
	.error "gText_Rom_21CA92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CA92) < 0x26
	.space 0x26 - (. - gText_Rom_21CA92)
	.endif
