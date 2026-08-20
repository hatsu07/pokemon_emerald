	@ data/maps/MtPyre_2F/scripts.inc:82 MtPyre_2F_Text_LukeNotEnoughMons (+1 aliases)
	.globl gText_Rom_216432
gText_Rom_216432: @ 0x08216432
	.string "テル『ぼくと しょうぶ するなら\nもっと ポケモン つれてきなよ!\pそうでないと かのじょの まえで\nいいところ みせられない じゃないか!{EOS}"
	.if (. - gText_Rom_216432) > 0x47
	.error "gText_Rom_216432 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216432) < 0x47
	.space 0x47 - (. - gText_Rom_216432)
	.endif
