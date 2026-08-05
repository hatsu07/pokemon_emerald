	@ data/text/apprentice.inc:97 gText_ApprenticePleaseTeach4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26D6A0
gText_Rom_26D6A0: @ 0x0826D6A0
	.string "あっ! {PLAYER}{KUN} でしょ!?\nポケモン つよいって きいてるよ!\pわたしは {STR_VAR_1}\nおともだちに なって あげる!\pあのね トレーナーズスクール で\nおそわった こと だけじゃ\lバトルフロンティア では かてないの!\pそうだんに のってくれても いいわよ\nもちろん オーケー でしょ?"
	.byte EOS
	.if (. - gText_Rom_26D6A0) != 0x8e
	.error "gText_Rom_26D6A0 must retain its original byte length"
	.endif
