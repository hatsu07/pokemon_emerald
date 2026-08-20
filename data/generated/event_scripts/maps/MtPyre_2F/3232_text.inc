	@ data/maps/MtPyre_2F/scripts.inc:77 MtPyre_2F_Text_LukePostBattle
	.globl gText_Rom_216400
gText_Rom_216400: @ 0x08216400
	.string "テル『まけちゃったけど だいじょうぶ!\nぼくが いるからさ\lきもだめし なんて へっちゃら だよ!{EOS}"
	.if (. - gText_Rom_216400) > 0x32
	.error "gText_Rom_216400 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216400) < 0x32
	.space 0x32 - (. - gText_Rom_216400)
	.endif
