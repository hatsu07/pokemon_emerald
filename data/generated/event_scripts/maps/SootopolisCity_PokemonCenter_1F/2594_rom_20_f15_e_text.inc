	@ data/maps/SootopolisCity_PokemonCenter_1F/scripts.inc:46 SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn
	.globl gText_Rom_20F046
gText_Rom_20F046: @ 0x0820F046
	.string "この まちの ジムリーダーは\nホウエンちほう でも いちばんと\lうわさの じつりょくしゃ ミクリに\pポケモン しょうぶの てほどきを した\nじんぶつが やっているのだ\pしかし そんな ミクリの ししょうよりも\nつよいと いわれる してんのう……\lその つよさは どれほどの ものだろう{EOS}"
	.if (. - gText_Rom_20F046) > 0x8f
	.error "gText_Rom_20F046 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F046) < 0x8f
	.space 0x8f - (. - gText_Rom_20F046)
	.endif
	@ data/maps/SootopolisCity_PokemonCenter_1F/scripts.inc:49 SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge
	.globl gText_Rom_20F0D5
gText_Rom_20F0D5: @ 0x0820F0D5
	.string "この まちの みんなが みんな\nいえに とじこもって でてこないんです!\pそう いってる わたしも\nここから でたくないんです……{EOS}"
	.if (. - gText_Rom_20F0D5) > 0x42
	.error "gText_Rom_20F0D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F0D5) < 0x42
	.space 0x42 - (. - gText_Rom_20F0D5)
	.endif
	@ data/maps/SootopolisCity_PokemonCenter_1F/scripts.inc:52 SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon
	.globl gText_Rom_20F117
gText_Rom_20F117: @ 0x0820F117
	.string "どんな ときでも\nどんな ことが あっても\lあたし ポケモンと ともだちで いるわ\pだって ポケモンと いっしょだと\nすごく たのしいもの!{EOS}"
	.if (. - gText_Rom_20F117) > 0x47
	.error "gText_Rom_20F117 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F117) < 0x47
	.space 0x47 - (. - gText_Rom_20F117)
	.endif
	@ data/maps/SootopolisCity_PokemonCenter_1F/scripts.inc:55 SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends
	.globl gText_Rom_20F15E
gText_Rom_20F15E: @ 0x0820F15E
	.string "ポケモンって\nあたしたちの ともだちじゃ…… ないの?\pどうして\nあんなふうに あばれて いるの?{EOS}"
	.if (. - gText_Rom_20F15E) > 0x32
	.error "gText_Rom_20F15E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F15E) < 0x32
	.space 0x32 - (. - gText_Rom_20F15E)
	.endif
	@ analyzed canonical ROM range 0x0820F190-0x0820F239
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02, 0x00
.globl EventScript_JP_0820F1B8
EventScript_JP_0820F1B8: @ 0x0820F1B8
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemart 0x0820F1D0
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x02, 0x00, 0x15, 0x00, 0x14, 0x00, 0x17, 0x00, 0x18, 0x00, 0x54, 0x00, 0x4B, 0x00, 0x4C
	.byte 0x00, 0x80, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_0820F1E6
EventScript_JP_0820F1E6: @ 0x0820F1E6
	lock
	faceplayer
	compare_var_to_value 0x40CA, 0x0002
	goto_if 0x04, EventScript_JP_0820F206
	checkflag 0x0081
	goto_if 0x00, EventScript_JP_0820F206
	loadword 0x00, gText_Rom_20F267
	callstd 0x04
	release
	end
EventScript_JP_0820F206: @ 0x0820F206
	loadword 0x00, gText_Rom_20F23A
	callstd 0x04
	release
	end
.globl EventScript_JP_0820F210
EventScript_JP_0820F210: @ 0x0820F210
	lock
	faceplayer
	compare_var_to_value 0x40CA, 0x0002
	goto_if 0x04, EventScript_JP_0820F230
	checkflag 0x0081
	goto_if 0x00, EventScript_JP_0820F230
	loadword 0x00, gText_Rom_20F2E8
	callstd 0x04
	release
	end
EventScript_JP_0820F230: @ 0x0820F230
	loadword 0x00, gText_Rom_20F299
	callstd 0x04
	release
	end
