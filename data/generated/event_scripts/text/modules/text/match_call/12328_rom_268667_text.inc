	@ data/text/match_call.inc:391 MatchCall_PersonalizedText60
	.globl gText_Rom_268667
gText_Rom_268667: @ 0x08268667
	.string "わかい トレーナーさんと\nおはなし できて うれしい のう\pきみも もちろん\nなんさいに なっても ポケモンを\lがんばる つもり じゃろう?\lその ときには わしらのように\lだれか あいてが いると いいのう!\pまあ {PLAYER}{KUN}は いまだって\nポケモンに しんらい されて\lずっと がんばって おるからのう\pりっぱな きんこんしきに なれる\nそしつは バッチリじゃ!\lはっはっはっ がんばるのじゃよ!$"
	.if (. - gText_Rom_268667) > 0xc8
	.error "gText_Rom_268667 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268667) < 0xc8
	.space 0xc8 - (. - gText_Rom_268667)
	.endif
