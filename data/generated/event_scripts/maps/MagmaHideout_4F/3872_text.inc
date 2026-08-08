	@ data/maps/MagmaHideout_4F/scripts.inc:161 MagmaHideout_4F_Text_Grunt13PostBattle
	.globl gText_Rom_21CB0F
gText_Rom_21CB0F: @ 0x0821CB0F
	.string "も もう ひとしょうぶ…… がくっ"
	.byte EOS
	.if (. - gText_Rom_21CB0F) > 0x12
	.error "gText_Rom_21CB0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CB0F) < 0x12
	.space 0x12 - (. - gText_Rom_21CB0F)
	.endif
