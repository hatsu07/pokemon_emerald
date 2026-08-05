	@ data/maps/MagmaHideout_4F/scripts.inc:127 MagmaHideout_4F_Text_Grunt11Intro (+1 aliases)
	.globl gText_Rom_21CA09
gText_Rom_21CA09: @ 0x0821CA09
	.string "オレも グラードンを みたいのに\nまだ シッポすら みせて もらえなくて\pイライラ してるんだ……\pあっ!\nグラードンのこと いっちゃった!"
	.byte EOS
	.if (. - gText_Rom_21CA09) > 0x47
	.error "gText_Rom_21CA09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CA09) < 0x47
	.space 0x47 - (. - gText_Rom_21CA09)
	.endif
