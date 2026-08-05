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
