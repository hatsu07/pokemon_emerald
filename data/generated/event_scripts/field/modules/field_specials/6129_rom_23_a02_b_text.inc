	@ data/maps/BattleFrontier_Lounge7/scripts.inc:304 BattleFrontier_Lounge7_Text_LeftTutorIntro
	.globl BattleFrontier_Lounge7_Text_LeftTutorIntro
BattleFrontier_Lounge7_Text_LeftTutorIntro: @ 0x08239BFD
	.string "ぶはははっ!\pあたしゃ こうみえても わかいころは\nそりゃー つよい トレーナーでよー\pさいきょうの おとなの おねえさんと して\nもー バリバリ いわしとったわ!\p…… … ……ん?\pなんじゃ あんた しんじとらんのかっ!?\pあたしゃ むこうの くちだけ ばあさんとは\nさいのうが ちがうんじゃっ!\pしょうこに あんたの ポケモンに\nすぺしゃる かつ きゅーとな わざの\lかずかずを おしえたろうかいなっ!!\pまあ じゅぎょうりょう ちゅう ことで\nちいと ばかし バトルポイントを\lいただくがのう!"
	.byte EOS
	.if (. - BattleFrontier_Lounge7_Text_LeftTutorIntro) > 0xfc
	.error "BattleFrontier_Lounge7_Text_LeftTutorIntro may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge7_Text_LeftTutorIntro) < 0xfc
	.space 0xfc - (. - BattleFrontier_Lounge7_Text_LeftTutorIntro)
	.endif
	@ data/maps/BattleFrontier_Lounge7/scripts.inc:307 BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack
	.globl BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack
BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack: @ 0x08239CF9
	.string "ぶはははっ!\pあたしゃの\nすぺしゃる かつ きゅーとな わざを\lおそわりに きたんかー!?"
	.byte EOS
	.if (. - BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack) > 0x2e
	.error "BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack) < 0x2e
	.space 0x2e - (. - BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack)
	.endif
	@ data/maps/BattleFrontier_Lounge7/scripts.inc:310 BattleFrontier_Lounge7_Text_TeachWhichMove
	.globl BattleFrontier_Lounge7_Text_TeachWhichMove
BattleFrontier_Lounge7_Text_TeachWhichMove: @ 0x08239D27
	.string "ほれほれー どのわざを おぼえたいんじゃ?"
	.byte EOS
	.if (. - BattleFrontier_Lounge7_Text_TeachWhichMove) > 0x16
	.error "BattleFrontier_Lounge7_Text_TeachWhichMove may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge7_Text_TeachWhichMove) < 0x16
	.space 0x16 - (. - BattleFrontier_Lounge7_Text_TeachWhichMove)
	.endif
	@ data/maps/BattleFrontier_Lounge7/scripts.inc:313 BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints
	.globl BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints
BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints: @ 0x08239D3D
	.string "{STR_VAR_1} が ええのんか!\n{STR_VAR_2} BP じゃが ええんじゃの!?"
	.byte EOS
	.if (. - BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints) > 0x1f
	.error "BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints) < 0x1f
	.space 0x1f - (. - BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints)
	.endif
	@ data/maps/BattleFrontier_Lounge7/scripts.inc:316 BattleFrontier_Lounge7_Text_TeachMoveToWhichMon
	.globl BattleFrontier_Lounge7_Text_TeachMoveToWhichMon
BattleFrontier_Lounge7_Text_TeachMoveToWhichMon: @ 0x08239D5C
	.string "ほいじゃあ わざを おぼえさせる\nポケモンを きめて おくれ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge7_Text_TeachMoveToWhichMon) > 0x20
	.error "BattleFrontier_Lounge7_Text_TeachMoveToWhichMon may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge7_Text_TeachMoveToWhichMon) < 0x20
	.space 0x20 - (. - BattleFrontier_Lounge7_Text_TeachMoveToWhichMon)
	.endif
	@ data/maps/BattleFrontier_Lounge7/scripts.inc:319 BattleFrontier_Lounge7_Text_HaventGotEnoughPoints
	.globl BattleFrontier_Lounge7_Text_HaventGotEnoughPoints
BattleFrontier_Lounge7_Text_HaventGotEnoughPoints: @ 0x08239D7C
	.string "なんじゃ……\nあんた バトルポイントが たりんぞ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge7_Text_HaventGotEnoughPoints) > 0x1a
	.error "BattleFrontier_Lounge7_Text_HaventGotEnoughPoints may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge7_Text_HaventGotEnoughPoints) < 0x1a
	.space 0x1a - (. - BattleFrontier_Lounge7_Text_HaventGotEnoughPoints)
	.endif
	@ data/maps/BattleFrontier_Lounge7/scripts.inc:322 BattleFrontier_Lounge7_Text_IllTakeBattlePoints
	.globl BattleFrontier_Lounge7_Text_IllTakeBattlePoints
BattleFrontier_Lounge7_Text_IllTakeBattlePoints: @ 0x08239D96
	.string "あたしゃの すごさが わかったかいっ!!\nじゃあ バトルポイントは いただくぞぃ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge7_Text_IllTakeBattlePoints) > 0x2a
	.error "BattleFrontier_Lounge7_Text_IllTakeBattlePoints may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge7_Text_IllTakeBattlePoints) < 0x2a
	.space 0x2a - (. - BattleFrontier_Lounge7_Text_IllTakeBattlePoints)
	.endif
	@ data/maps/BattleFrontier_Lounge7/scripts.inc:325 BattleFrontier_Lounge7_Text_YouDontWantTo
	.globl BattleFrontier_Lounge7_Text_YouDontWantTo
BattleFrontier_Lounge7_Text_YouDontWantTo: @ 0x08239DC0
	.string "なんじゃ? やめるんか……\pあたしゃの すごさを しりたかったら\nいつでも くるが ええぞぃ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge7_Text_YouDontWantTo) > 0x30
	.error "BattleFrontier_Lounge7_Text_YouDontWantTo may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge7_Text_YouDontWantTo) < 0x30
	.space 0x30 - (. - BattleFrontier_Lounge7_Text_YouDontWantTo)
	.endif
	@ data/maps/BattleFrontier_Lounge7/scripts.inc:328 BattleFrontier_Lounge7_Text_RightTutorIntro
	.globl BattleFrontier_Lounge7_Text_RightTutorIntro
BattleFrontier_Lounge7_Text_RightTutorIntro: @ 0x08239DF0
	.string "いひひひっ!\pあたしゃ こうみえても わかいころは\nそりゃー つよい トレーナーでよー\pむてきの ビキニの おねえさんと して\nもー ブイブイ いわしとったわ!\p…… …… ……ん?\pなんじゃ あんた しんじとらんのかっ!?\pあたしゃ むこうの くちだけ ばあさんと\nちがって じつりょくが あるんじゃっ!\pしょうこに あんたの ポケモンに\nはーど かつ ぷりてぃな わざの\lかずかずを おしえたろうかいなっ!\pまあ じゅぎょうりょう ちゅう ことで\nちいと ばかし バトルポイントを\lいただくがのう!"
	.byte EOS
	.if (. - BattleFrontier_Lounge7_Text_RightTutorIntro) > 0xfc
	.error "BattleFrontier_Lounge7_Text_RightTutorIntro may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge7_Text_RightTutorIntro) < 0xfc
	.space 0xfc - (. - BattleFrontier_Lounge7_Text_RightTutorIntro)
	.endif
	@ data/maps/BattleFrontier_Lounge7/scripts.inc:331 BattleFrontier_Lounge7_Text_RightTutorWelcomeBack
	.globl BattleFrontier_Lounge7_Text_RightTutorWelcomeBack
BattleFrontier_Lounge7_Text_RightTutorWelcomeBack: @ 0x08239EEC
	.string "いひひひっ!\pあたしゃの\nはーど かつ ぷりてぃな わざを\lおそわりに きたんかー!?"
	.byte EOS
	.if (. - BattleFrontier_Lounge7_Text_RightTutorWelcomeBack) > 0x2c
	.error "BattleFrontier_Lounge7_Text_RightTutorWelcomeBack may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge7_Text_RightTutorWelcomeBack) < 0x2c
	.space 0x2c - (. - BattleFrontier_Lounge7_Text_RightTutorWelcomeBack)
	.endif
	@ data/maps/BattleFrontier_Lounge7/scripts.inc:334 BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong
	.globl BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong
BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong: @ 0x08239F18
	.string "あの ふたりって おたがいの\nわるぐち いい あってる から\lなかが わるいとか おもって ないか?\pでも ほんとに そう だったら いっしょに\nこんなところに いたり しないよな"
	.byte EOS
	.if (. - BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong) > 0x5b
	.error "BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong) < 0x5b
	.space 0x5b - (. - BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong)
	.endif
	@ data/maps/BattleFrontier_Lounge7/scripts.inc:337 BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful
	.globl BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful
BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful: @ 0x08239F73
	.string "わたしが まだ たんぱんこぞう だったころ\nつよく うつくしい かのじょ たちは\lトレーナー みんなの アイドル でした\pいまも その わざの キレは\nおとろえる どころか\lますます みがきが かかっている ようです\pだが…… なぜか こう おもうのです……\pじかんと いうものは\nざんこくな もの ですね……"
	.byte EOS
	.if (. - BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful) > 0x9c
	.error "BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful) < 0x9c
	.space 0x9c - (. - BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful)
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
