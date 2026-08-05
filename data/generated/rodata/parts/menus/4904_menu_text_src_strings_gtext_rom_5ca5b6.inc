	@ src/strings.c:407 gText_OddEggFoundByCouple
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA5B6
gText_Rom_5CA5B6: @ 0x085CA5B6
	.string "そだてや ふうふ から もらった\nふしぎな ポケモンのタマゴ$"
	.if (. - gText_Rom_5CA5B6) != 0x1f
	.error "gText_Rom_5CA5B6 must retain its original byte length"
	.endif
