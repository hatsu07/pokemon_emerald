	@ data/maps/JaggedPass/scripts.inc:223 JaggedPass_Text_GruntIntro
	.globl gText_Rom_215F8B
gText_Rom_215F8B: @ 0x08215F8B
	.string "うわっ!? ……なんだ おまえ!\pオレが\n  こんな\l    ところで\lなにを\l  してるか\l    なんて\lおまえにゃ カンケー\lな い だ ろ が!{EOS}"
	.if (. - gText_Rom_215F8B) > 0x4d
	.error "gText_Rom_215F8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215F8B) < 0x4d
	.space 0x4d - (. - gText_Rom_215F8B)
	.endif
