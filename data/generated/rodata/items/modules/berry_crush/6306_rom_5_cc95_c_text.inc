	@ asm/berry_crush.s:4221 sub_08022A78 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC95C
gText_Rom_5CC95C: @ 0x085CC95C
	.string "つかう　きのみが　ありません\nゲームを　しゅうりょうします{EOS}"
	.if (. - gText_Rom_5CC95C) != 0x1e
	.error "gText_Rom_5CC95C must retain its original byte length"
	.endif
