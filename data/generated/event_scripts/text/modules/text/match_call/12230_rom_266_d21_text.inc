	@ data/text/match_call.inc:247 MatchCall_PersonalizedText12
	.globl gText_Rom_266D21
gText_Rom_266D21: @ 0x08266D21
	.string "やあ\nおかねもちの {STR_VAR_1} だけど\pボク あれから ますます\nおかねもちに なっちゃったし\lポケモンも ますます つよく なったよ\pこの せかいって\nボクの ために あるんじゃない かな?\pああ へんじは しなくて いいよ\nわかっている ことだからね!\lおっと そろそろ ディナーのじかんだ\lしつれい するよ!$"
	.if (. - gText_Rom_266D21) > 0x9b
	.error "gText_Rom_266D21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266D21) < 0x9b
	.space 0x9b - (. - gText_Rom_266D21)
	.endif
