	@ data/maps/LilycoveCity/scripts.inc:513 LilycoveCity_Text_BrendanYouGoingToCollectBadges
	.globl gText_Rom_1E0B06
gText_Rom_1E0B06: @ 0x081E0B06
	.string "{PLAYER}は どうする?\pやっぱり ぜんぶの ジムバッジ あつめて\nポケモンリーグ ちょうせん するのか?\pオレも そうしようかな\pまあ いいや\nとにかく がんばれよ!{EOS}"
	.if (. - gText_Rom_1E0B06) > 0x52
	.error "gText_Rom_1E0B06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0B06) < 0x52
	.space 0x52 - (. - gText_Rom_1E0B06)
	.endif
