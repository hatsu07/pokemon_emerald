	@ src/strings.c:410 gText_EggFromHotSprings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA616
gText_Rom_5CA616: @ 0x085CA616
	.string "おんせんばあさん から もらった\nふしぎな ポケモンのタマゴ$"
	.if (. - gText_Rom_5CA616) != 0x1f
	.error "gText_Rom_5CA616 must retain its original byte length"
	.endif
