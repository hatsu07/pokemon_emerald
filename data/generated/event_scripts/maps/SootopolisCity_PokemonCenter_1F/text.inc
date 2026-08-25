	@ data/maps/SootopolisCity_PokemonCenter_1F/scripts.inc:46 SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn
	.globl SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn
SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn: @ 0x0820F046
	.string "この まちの ジムリーダーは\nホウエンちほう でも いちばんと\lうわさの じつりょくしゃ ミクリに\pポケモン しょうぶの てほどきを した\nじんぶつが やっているのだ\pしかし そんな ミクリの ししょうよりも\nつよいと いわれる してんのう……\lその つよさは どれほどの ものだろう{EOS}"
	.if (. - SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn) > 0x8f
	.error "SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn) < 0x8f
	.space 0x8f - (. - SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn)
	.endif
	@ data/maps/SootopolisCity_PokemonCenter_1F/scripts.inc:49 SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge
	.globl SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge
SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge: @ 0x0820F0D5
	.string "この まちの みんなが みんな\nいえに とじこもって でてこないんです!\pそう いってる わたしも\nここから でたくないんです……{EOS}"
	.if (. - SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge) > 0x42
	.error "SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge) < 0x42
	.space 0x42 - (. - SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge)
	.endif
	@ data/maps/SootopolisCity_PokemonCenter_1F/scripts.inc:52 SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon
	.globl SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon
SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon: @ 0x0820F117
	.string "どんな ときでも\nどんな ことが あっても\lあたし ポケモンと ともだちで いるわ\pだって ポケモンと いっしょだと\nすごく たのしいもの!{EOS}"
	.if (. - SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon) > 0x47
	.error "SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon) < 0x47
	.space 0x47 - (. - SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon)
	.endif
	@ data/maps/SootopolisCity_PokemonCenter_1F/scripts.inc:55 SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends
	.globl SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends
SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends: @ 0x0820F15E
	.string "ポケモンって\nあたしたちの ともだちじゃ…… ないの?\pどうして\nあんなふうに あばれて いるの?{EOS}"
	.if (. - SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends) > 0x32
	.error "SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends) < 0x32
	.space 0x32 - (. - SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends)
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
	message FieldScriptText_24390F
	waitmessage
	pokemart 0x0820F1D0
	loadword 0x00, FieldScriptText_243920
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
	loadword 0x00, SootopolisCity_Mart_Text_TooScaryOutside
	callstd 0x04
	release
	end
EventScript_JP_0820F206: @ 0x0820F206
	loadword 0x00, SootopolisCity_Mart_Text_PPUpIsGreat
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
	loadword 0x00, SootopolisCity_Mart_Text_DidSomethingAwaken
	callstd 0x04
	release
	end
EventScript_JP_0820F230: @ 0x0820F230
	loadword 0x00, SootopolisCity_Mart_Text_FullRestoreItemOfDreams
	callstd 0x04
	release
	end
