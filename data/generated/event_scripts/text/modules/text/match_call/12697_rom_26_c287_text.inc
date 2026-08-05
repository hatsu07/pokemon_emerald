	@ data/text/match_call.inc:919 MatchCall_Text_MrStone1
	.globl gText_Rom_26C287
gText_Rom_26C287: @ 0x0826C287
	.string "ツワブキ『おっ! {PLAYER}{KUN}か?\pこうして わしを よびだした ってことは\nポケナビの ちょうしは よさそうだな!\pわしの ほかにも いろんな ひとが\nとうろく されて いくから どんどん\lよびだして はなしを すると いいぞ!\pけっこう! けっこう!\nうれしそうに しとる ようだな!\p……ん? なんで わかるのかって?\pそれは…… しゃちょうしつの まどから\nきみを みおろして いるからだよ!\pわははは! じゃあ またな!"
	.byte EOS
	.if (. - gText_Rom_26C287) > 0xd6
	.error "gText_Rom_26C287 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C287) < 0xd6
	.space 0xd6 - (. - gText_Rom_26C287)
	.endif
