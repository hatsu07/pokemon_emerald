	@ data/text/apprentice.inc:229 gText_ApprenticePleaseTeach15
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26E8D6
gText_Rom_26E8D6: @ 0x0826E8D6
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lほんもの なのかね?\pわたしは {STR_VAR_1}だ\nいまね だれか つよい トレーナーに\lでしいり したいと おもって いたんだよ\pきみが いるなら よかった!\n……ほんとうに {PLAYER}{KUN} だよね?\pいや ほんもの なら いいんだ\nわたしの でしいりを みとめて ほしい"
	.byte EOS
	.if (. - gText_Rom_26E8D6) != 0x95
	.error "gText_Rom_26E8D6 must retain its original byte length"
	.endif
