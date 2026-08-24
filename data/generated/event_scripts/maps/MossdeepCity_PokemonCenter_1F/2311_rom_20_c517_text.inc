	@ data/maps/MossdeepCity_PokemonCenter_1F/scripts.inc:26 MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable
	.globl gText_Rom_20C4E1
gText_Rom_20C4E1: @ 0x0820C4E1
	.string "この まちの ジムリーダー\nなんといっても あの コンビネーションは\lさいこう! さすが! って かんじよ{EOS}"
	.if (. - gText_Rom_20C4E1) > 0x36
	.error "gText_Rom_20C4E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C4E1) < 0x36
	.space 0x36 - (. - gText_Rom_20C4E1)
	.endif
	@ data/maps/MossdeepCity_PokemonCenter_1F/scripts.inc:29 MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves
	.globl gText_Rom_20C517
gText_Rom_20C517: @ 0x0820C517
	.string "ポケモンの とくせいに よっては\nわざの いりょくが かわったり\lまったく きかなかったり するよ!{EOS}"
	.if (. - gText_Rom_20C517) > 0x33
	.error "gText_Rom_20C517 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C517) < 0x33
	.space 0x33 - (. - gText_Rom_20C517)
	.endif
	@ analyzed canonical ROM range 0x0820C54A-0x0820C579
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02
.globl EventScript_JP_0820C571
EventScript_JP_0820C571: @ 0x0820C571
	loadword 0x00, gText_Rom_20C57A
	callstd 0x02
	end
