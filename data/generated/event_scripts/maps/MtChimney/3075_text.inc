	@ data/maps/MtChimney/scripts.inc:668 MtChimney_Text_ArchieGoStopTeamMagma
	.globl gText_Rom_215500
gText_Rom_215500: @ 0x08215500
	.string "アオギリ『むむむ {PLAYER}!\nやっぱり ここにも あらわれたか!\pほら! マグマだんの れんちゅうが\nなにを たくらんで いるのか みてみろ!\pやつらは うばった いんせきの パワーを\nかざんに ながしこもうと しているんだ!\pそんなことを したら\nかざんが だいふんか するじゃないか!{EOS}"
	.if (. - gText_Rom_215500) > 0x8f
	.error "gText_Rom_215500 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215500) < 0x8f
	.space 0x8f - (. - gText_Rom_215500)
	.endif
