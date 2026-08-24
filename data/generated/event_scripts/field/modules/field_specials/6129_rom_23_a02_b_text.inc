	@ data/maps/BattleFrontier_Lounge7/scripts.inc:304 BattleFrontier_Lounge7_Text_LeftTutorIntro
	.globl gText_Rom_239BFD
gText_Rom_239BFD: @ 0x08239BFD
	.string "ぶはははっ!\pあたしゃ こうみえても わかいころは\nそりゃー つよい トレーナーでよー\pさいきょうの おとなの おねえさんと して\nもー バリバリ いわしとったわ!\p…… … ……ん?\pなんじゃ あんた しんじとらんのかっ!?\pあたしゃ むこうの くちだけ ばあさんとは\nさいのうが ちがうんじゃっ!\pしょうこに あんたの ポケモンに\nすぺしゃる かつ きゅーとな わざの\lかずかずを おしえたろうかいなっ!!\pまあ じゅぎょうりょう ちゅう ことで\nちいと ばかし バトルポイントを\lいただくがのう!"
	.byte EOS
	.if (. - gText_Rom_239BFD) > 0xfc
	.error "gText_Rom_239BFD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239BFD) < 0xfc
	.space 0xfc - (. - gText_Rom_239BFD)
	.endif
	@ data/maps/BattleFrontier_Lounge7/scripts.inc:307 BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack
	.globl gText_Rom_239CF9
gText_Rom_239CF9: @ 0x08239CF9
	.string "ぶはははっ!\pあたしゃの\nすぺしゃる かつ きゅーとな わざを\lおそわりに きたんかー!?"
	.byte EOS
	.if (. - gText_Rom_239CF9) > 0x2e
	.error "gText_Rom_239CF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239CF9) < 0x2e
	.space 0x2e - (. - gText_Rom_239CF9)
	.endif
	@ data/maps/BattleFrontier_Lounge7/scripts.inc:310 BattleFrontier_Lounge7_Text_TeachWhichMove
	.globl gText_Rom_239D27
gText_Rom_239D27: @ 0x08239D27
	.string "ほれほれー どのわざを おぼえたいんじゃ?"
	.byte EOS
	.if (. - gText_Rom_239D27) > 0x16
	.error "gText_Rom_239D27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239D27) < 0x16
	.space 0x16 - (. - gText_Rom_239D27)
	.endif
	@ data/maps/BattleFrontier_Lounge7/scripts.inc:313 BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints
	.globl gText_Rom_239D3D
gText_Rom_239D3D: @ 0x08239D3D
	.string "{STR_VAR_1} が ええのんか!\n{STR_VAR_2} BP じゃが ええんじゃの!?"
	.byte EOS
	.if (. - gText_Rom_239D3D) > 0x1f
	.error "gText_Rom_239D3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239D3D) < 0x1f
	.space 0x1f - (. - gText_Rom_239D3D)
	.endif
	@ data/maps/BattleFrontier_Lounge7/scripts.inc:316 BattleFrontier_Lounge7_Text_TeachMoveToWhichMon
	.globl gText_Rom_239D5C
gText_Rom_239D5C: @ 0x08239D5C
	.string "ほいじゃあ わざを おぼえさせる\nポケモンを きめて おくれ!"
	.byte EOS
	.if (. - gText_Rom_239D5C) > 0x20
	.error "gText_Rom_239D5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239D5C) < 0x20
	.space 0x20 - (. - gText_Rom_239D5C)
	.endif
	@ data/maps/BattleFrontier_Lounge7/scripts.inc:319 BattleFrontier_Lounge7_Text_HaventGotEnoughPoints
	.globl gText_Rom_239D7C
gText_Rom_239D7C: @ 0x08239D7C
	.string "なんじゃ……\nあんた バトルポイントが たりんぞ!"
	.byte EOS
	.if (. - gText_Rom_239D7C) > 0x1a
	.error "gText_Rom_239D7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239D7C) < 0x1a
	.space 0x1a - (. - gText_Rom_239D7C)
	.endif
	@ data/maps/BattleFrontier_Lounge7/scripts.inc:322 BattleFrontier_Lounge7_Text_IllTakeBattlePoints
	.globl gText_Rom_239D96
gText_Rom_239D96: @ 0x08239D96
	.string "あたしゃの すごさが わかったかいっ!!\nじゃあ バトルポイントは いただくぞぃ!"
	.byte EOS
	.if (. - gText_Rom_239D96) > 0x2a
	.error "gText_Rom_239D96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239D96) < 0x2a
	.space 0x2a - (. - gText_Rom_239D96)
	.endif
	@ data/maps/BattleFrontier_Lounge7/scripts.inc:325 BattleFrontier_Lounge7_Text_YouDontWantTo
	.globl gText_Rom_239DC0
gText_Rom_239DC0: @ 0x08239DC0
	.string "なんじゃ? やめるんか……\pあたしゃの すごさを しりたかったら\nいつでも くるが ええぞぃ!"
	.byte EOS
	.if (. - gText_Rom_239DC0) > 0x30
	.error "gText_Rom_239DC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239DC0) < 0x30
	.space 0x30 - (. - gText_Rom_239DC0)
	.endif
	@ data/maps/BattleFrontier_Lounge7/scripts.inc:328 BattleFrontier_Lounge7_Text_RightTutorIntro
	.globl gText_Rom_239DF0
gText_Rom_239DF0: @ 0x08239DF0
	.string "いひひひっ!\pあたしゃ こうみえても わかいころは\nそりゃー つよい トレーナーでよー\pむてきの ビキニの おねえさんと して\nもー ブイブイ いわしとったわ!\p…… …… ……ん?\pなんじゃ あんた しんじとらんのかっ!?\pあたしゃ むこうの くちだけ ばあさんと\nちがって じつりょくが あるんじゃっ!\pしょうこに あんたの ポケモンに\nはーど かつ ぷりてぃな わざの\lかずかずを おしえたろうかいなっ!\pまあ じゅぎょうりょう ちゅう ことで\nちいと ばかし バトルポイントを\lいただくがのう!"
	.byte EOS
	.if (. - gText_Rom_239DF0) > 0xfc
	.error "gText_Rom_239DF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239DF0) < 0xfc
	.space 0xfc - (. - gText_Rom_239DF0)
	.endif
	@ data/maps/BattleFrontier_Lounge7/scripts.inc:331 BattleFrontier_Lounge7_Text_RightTutorWelcomeBack
	.globl gText_Rom_239EEC
gText_Rom_239EEC: @ 0x08239EEC
	.string "いひひひっ!\pあたしゃの\nはーど かつ ぷりてぃな わざを\lおそわりに きたんかー!?"
	.byte EOS
	.if (. - gText_Rom_239EEC) > 0x2c
	.error "gText_Rom_239EEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239EEC) < 0x2c
	.space 0x2c - (. - gText_Rom_239EEC)
	.endif
	@ data/maps/BattleFrontier_Lounge7/scripts.inc:334 BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong
	.globl gText_Rom_239F18
gText_Rom_239F18: @ 0x08239F18
	.string "あの ふたりって おたがいの\nわるぐち いい あってる から\lなかが わるいとか おもって ないか?\pでも ほんとに そう だったら いっしょに\nこんなところに いたり しないよな"
	.byte EOS
	.if (. - gText_Rom_239F18) > 0x5b
	.error "gText_Rom_239F18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239F18) < 0x5b
	.space 0x5b - (. - gText_Rom_239F18)
	.endif
	@ data/maps/BattleFrontier_Lounge7/scripts.inc:337 BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful
	.globl gText_Rom_239F73
gText_Rom_239F73: @ 0x08239F73
	.string "わたしが まだ たんぱんこぞう だったころ\nつよく うつくしい かのじょ たちは\lトレーナー みんなの アイドル でした\pいまも その わざの キレは\nおとろえる どころか\lますます みがきが かかっている ようです\pだが…… なぜか こう おもうのです……\pじかんと いうものは\nざんこくな もの ですね……"
	.byte EOS
	.if (. - gText_Rom_239F73) > 0x9c
	.error "gText_Rom_239F73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239F73) < 0x9c
	.space 0x9c - (. - gText_Rom_239F73)
	.endif
	@ asm/field_specials.s:6373 sub_0813AD6C (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23A00F
gText_Rom_23A00F: @ 0x0823A00F
	.string "キズついた　からだを\nたいりょくの\nはんぶん　かいふく"
	.byte EOS
	.if (. - gText_Rom_23A00F) != 0x1c
	.error "gText_Rom_23A00F must retain its original byte length"
	.endif
	.globl gText_Rom_23A026
	.set gText_Rom_23A026, gText_Rom_23A00F + 0x17
	@ asm/field_specials.s:6373 sub_0813AD6C (+1 aliases)
	.globl gText_Rom_23A02B
gText_Rom_23A02B: @ 0x0823A02B
	.string "いんりょくを　りよう\nレベル　ぶんの\nダメージを　あたえる"
	.byte EOS
	.if (. - gText_Rom_23A02B) > 0x1e
	.error "gText_Rom_23A02B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A02B) < 0x1e
	.space 0x1e - (. - gText_Rom_23A02B)
	.endif
