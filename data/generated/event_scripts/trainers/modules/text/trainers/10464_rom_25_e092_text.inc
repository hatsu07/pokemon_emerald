	@ data/text/trainers.inc:1793 Route117_Text_MegPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25E092
gText_Rom_25E092: @ 0x0825E092
	.string "リコ『あたしが センパイの\nあしを ひっぱっちゃったの……\pそうでなきゃ あんた かってないわよ!{EOS}"
	.if (. - gText_Rom_25E092) != 0x32
	.error "gText_Rom_25E092 must retain its original byte length"
	.endif
