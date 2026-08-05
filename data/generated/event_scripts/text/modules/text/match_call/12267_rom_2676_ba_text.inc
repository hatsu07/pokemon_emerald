	@ data/text/match_call.inc:301 MatchCall_PersonalizedText30
	.globl gText_Rom_2676BA
gText_Rom_2676BA: @ 0x082676BA
	.string "わたしは…… {STR_VAR_1}だ\pひとは わたしを たつじんと よぶ\nだが わたしは わかっている\lわたしだけの ちから では\lたつじん には なれない ことを\pポケモンの ちからが あってこそ\nトレーナーは たつじんに なれる!\pうむ……! わたしは いま\nすごく いいことを いった きがする!\lきもちがよい ままに わかれよう!$"
	.if (. - gText_Rom_2676BA) > 0xa2
	.error "gText_Rom_2676BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2676BA) < 0xa2
	.space 0xa2 - (. - gText_Rom_2676BA)
	.endif
