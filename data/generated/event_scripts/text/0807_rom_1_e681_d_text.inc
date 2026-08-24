	@ data/maps/Route101/scripts.inc:259 Route101_Text_HelpMe
	.globl Route101_Text_HelpMe
Route101_Text_HelpMe: @ 0x081E668B
	.string "たっ たすけて くれーっ!!{EOS}"
	.if (. - Route101_Text_HelpMe) > 0xf
	.error "Route101_Text_HelpMe may not grow beyond its original slot"
	.endif
	.if (. - Route101_Text_HelpMe) < 0xf
	.space 0xf - (. - Route101_Text_HelpMe)
	.endif
	@ data/maps/Route101/scripts.inc:262 Route101_Text_PleaseHelp
	.globl Route101_Text_PleaseHelp
Route101_Text_PleaseHelp: @ 0x081E669A
	.string "おーい! そこの きみ!\nたすけて おくれーっ!!\pそこに ある カバンに\nモンスターボールが はいってる!{EOS}"
	.if (. - Route101_Text_PleaseHelp) > 0x37
	.error "Route101_Text_PleaseHelp may not grow beyond its original slot"
	.endif
	.if (. - Route101_Text_PleaseHelp) < 0x37
	.space 0x37 - (. - Route101_Text_PleaseHelp)
	.endif
	@ data/maps/Route101/scripts.inc:268 Route101_Text_DontLeaveMe
	.globl Route101_Text_DontLeaveMe
Route101_Text_DontLeaveMe: @ 0x081E66D1
	.string "どっ どこへ いくんだ!?\nわたしを みすてないで おくれーっ!{EOS}"
	.if (. - Route101_Text_DontLeaveMe) > 0x21
	.error "Route101_Text_DontLeaveMe may not grow beyond its original slot"
	.endif
	.if (. - Route101_Text_DontLeaveMe) < 0x21
	.space 0x21 - (. - Route101_Text_DontLeaveMe)
	.endif
	@ data/maps/Route101/scripts.inc:272 Route101_Text_YouSavedMe
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route101_Text_YouSavedMe
Route101_Text_YouSavedMe: @ 0x081E66F2
	.string "オダマキ『はあ はあ……\pやせいの ポケモンを ちょうさ しようと\nくさむらに はいったら\lとつぜん ポケモンに おそわれて……\pとにかく たすかったよ ありがとう!\p……おや?\pきみは {PLAYER}{KUN} じゃないか!\pこんな ところでは なんだから\nちょっと けんきゅうじょ まで きておくれ{EOS}"
	.if (. - Route101_Text_YouSavedMe) != 0x90
	.error "Route101_Text_YouSavedMe must retain its original byte length"
	.endif
	.globl gText_Rom_1E677E
	.set gText_Rom_1E677E, Route101_Text_YouSavedMe + 0x8c
	@ data/maps/Route101/scripts.inc:283 Route101_Text_TakeTiredPokemonToPokeCenter
	.globl Route101_Text_TakeTiredPokemonToPokeCenter
Route101_Text_TakeTiredPokemonToPokeCenter: @ 0x081E6782
	.string "ポケモンが よわってきたら\nポケモンセンターに いくと いいよ!\pポケモンセンターなら すぐ ちかく\nコトキタウンに あるからね{EOS}"
	.if (. - Route101_Text_TakeTiredPokemonToPokeCenter) > 0x41
	.error "Route101_Text_TakeTiredPokemonToPokeCenter may not grow beyond its original slot"
	.endif
	.if (. - Route101_Text_TakeTiredPokemonToPokeCenter) < 0x41
	.space 0x41 - (. - Route101_Text_TakeTiredPokemonToPokeCenter)
	.endif
	@ data/maps/Route101/scripts.inc:289 Route101_Text_WildPokemonInTallGrass
	.globl Route101_Text_WildPokemonInTallGrass
Route101_Text_WildPokemonInTallGrass: @ 0x081E67C3
	.string "やせいの ポケモンは\nくさむらから とびだしてくる からな!\pこうして くさむらの なかに はいって\nつかまえたい ポケモンを さがすんだよ!{EOS}"
	.if (. - Route101_Text_WildPokemonInTallGrass) > 0x48
	.error "Route101_Text_WildPokemonInTallGrass may not grow beyond its original slot"
	.endif
	.if (. - Route101_Text_WildPokemonInTallGrass) < 0x48
	.space 0x48 - (. - Route101_Text_WildPokemonInTallGrass)
	.endif
	@ field-script:0x1E660B FieldScriptText_1E680B
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E680B
gText_Rom_1E680B: @ 0x081E680B
	.string "ここは　101ばん　どうろ\n{ESCAPE}{0x00}　コトキタウン{EOS}"
	.if (. - gText_Rom_1E680B) != 0x19
	.error "gText_Rom_1E680B must retain its original byte length"
	.endif
	.globl gText_Rom_1E681D
	.set gText_Rom_1E681D, gText_Rom_1E680B + 0x12
	@ Embedded ROM bytes: file offset 0x1E6824, size 0x118
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x00, 0x0F, 0x00
	.4byte Route102_Text_ImNotVeryTall @ ROM pointer 0x081E69C7
	.byte 0x09, 0x02, 0x02, 0x0F, 0x00, 0x27, 0x6A, 0x1E, 0x08, 0x09, 0x03, 0x02, 0x0F, 0x00, 0x40, 0x6A
	.byte 0x1E, 0x08, 0x09, 0x03, 0x02, 0x0F, 0x00
	.4byte Route102_Text_CatchWholeBunchOfPokemon
	.byte 0x09, 0x02, 0x02, 0x5C, 0x02
	.byte 0x3E, 0x01, 0x00, 0x00
	.4byte Route102_Text_CalvinIntro @ ROM pointer 0x08259517
	.4byte Route102_Text_CalvinDefeated @ ROM pointer 0x08259548
	.byte 0x8A, 0x68, 0x1E, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01
	.byte 0xE0, 0x68, 0x1E, 0x08, 0x16, 0x04, 0x80, 0x3E, 0x01, 0x26, 0x0D, 0x80, 0xEE, 0x01, 0x21, 0x0D
	.byte 0x80, 0x00, 0x00, 0x06, 0x01, 0xB4, 0x68, 0x1E, 0x08, 0x0F, 0x00, 0x63, 0x95, 0x25, 0x08, 0x09
	.byte 0x04, 0x6C, 0x02, 0x25, 0x04, 0x02, 0x51, 0x00, 0x00, 0x2B, 0x2F, 0x01, 0x06, 0x01, 0x9B, 0x68
	.byte 0x1E, 0x08, 0x6C, 0x02, 0x0F, 0x00
	.4byte Route102_Text_CalvinRegisterShort
	.byte 0x09, 0x04, 0x16, 0x04, 0x80, 0x3E
	.byte 0x01, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0x3E, 0x01, 0x09, 0x08, 0x6C, 0x02, 0x2B, 0x2F, 0x01
	.byte 0x06, 0x01, 0xC7, 0x68, 0x1E, 0x08, 0x0F, 0x00
	.4byte Route102_Text_CalvinPostBattle @ ROM pointer 0x08259563
	.byte 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00
	.4byte Route102_Text_CalvinRegister
	.byte 0x09, 0x04, 0x16, 0x04, 0x80, 0x3E
	.byte 0x01, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0x3E, 0x01, 0x09, 0x08, 0x6C, 0x02, 0x5C, 0x05, 0x3E
	.byte 0x01, 0x00, 0x00
	.4byte Route102_Text_CalvinRematchIntro
	.4byte Route102_Text_CalvinRematchDefeated
	.byte 0x0F, 0x00, 0x19, 0x96, 0x25
	.byte 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0x67, 0x02, 0x00, 0x00
	.4byte Route102_Text_RickIntro
	.byte 0xB0, 0x96
	.byte 0x25, 0x08, 0x0F, 0x00
	.4byte Route102_Text_RickPostBattle @ ROM pointer 0x082596B9
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x5B, 0x02, 0x00, 0x00
	.4byte Route102_Text_TianaIntro @ ROM pointer 0x082596DA
	.4byte Route102_Text_TianaDefeated @ ROM pointer 0x08259710
	.byte 0x0F, 0x00
	.4byte Route102_Text_TianaPostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x4D, 0x01, 0x00, 0x00
	.4byte Route102_Text_AllenIntro @ ROM pointer 0x0825963A
	.4byte Route102_Text_AllenDefeated @ ROM pointer 0x0825965C
	.byte 0x0F, 0x00
	.4byte Route102_Text_AllenPostBattle
	.byte 0x09, 0x06, 0x02
