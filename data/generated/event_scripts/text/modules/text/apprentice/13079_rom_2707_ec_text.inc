	@ data/text/apprentice.inc:535 gText_ApprenticeWhichMonFirst9
	.globl gText_Rom_2707EC
gText_Rom_2707EC: @ 0x082707EC
	.string "ハローウ!\nマイ ティーチャー {PLAYER}{KUN}\lきょうも アドバイス バンバンたのむよ!\pおじさん スリー ポケモンズで\nティームを つくったのは いいんだが\lまだ じゅんばんが きまって ないんだよ\pそこで! {PLAYER}{KUN}が\nまず はじめに だす ポケモンを\lササーっと きめちゃって くれ!"
	.byte EOS
	.if (. - gText_Rom_2707EC) > 0x8f
	.error "gText_Rom_2707EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2707EC) < 0x8f
	.space 0x8f - (. - gText_Rom_2707EC)
	.endif
