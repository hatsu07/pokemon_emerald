	@ data/maps/MossdeepCity_PokemonCenter_1F/scripts.inc:26 MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable
	.globl MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable
MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable: @ 0x0820C4E1
	.string "この まちの ジムリーダー\nなんといっても あの コンビネーションは\lさいこう! さすが! って かんじよ{EOS}"
	.if (. - MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable) > 0x36
	.error "MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable) < 0x36
	.space 0x36 - (. - MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable)
	.endif
	@ data/maps/MossdeepCity_PokemonCenter_1F/scripts.inc:29 MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves
	.globl MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves
MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves: @ 0x0820C517
	.string "ポケモンの とくせいに よっては\nわざの いりょくが かわったり\lまったく きかなかったり するよ!{EOS}"
	.if (. - MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves) > 0x33
	.error "MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves) < 0x33
	.space 0x33 - (. - MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves)
	.endif
	@ analyzed canonical ROM range 0x0820C54A-0x0820C579
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02
.globl EventScript_JP_0820C571
EventScript_JP_0820C571: @ 0x0820C571
	loadword 0x00, MossdeepCity_PokemonCenter_2F_Text_Woman5
	callstd 0x02
	end
