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
