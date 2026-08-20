	@ data/maps/MossdeepCity/scripts.inc:342 MossdeepCity_Text_SpecialSpaceCenterRock
	.globl gText_Rom_1E1AEE
gText_Rom_1E1AEE: @ 0x081E1AEE
	.string "この いわ って\nうちゅうセンターの みんなに とって\lだいじな いわ なの\pロケットが ぶじに とぶように ねがって\nここに おいたんだって!\pあなたは ねがいごとを かなえたいとき\nどうするの?\lながれぼしに ねがうの?\pあたしなら たんざくに\nおねがいごとを かくかな やっぱ!{EOS}"
	.if (. - gText_Rom_1E1AEE) > 0x8f
	.error "gText_Rom_1E1AEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1AEE) < 0x8f
	.space 0x8f - (. - gText_Rom_1E1AEE)
	.endif
