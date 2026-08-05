	@ src/strings.c:411 gText_EggFromTraveler
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA635
gText_Rom_5CA635: @ 0x085CA635
	.string "たびの おじさん から もらった\nふしぎな ポケモンのタマゴ$"
	.if (. - gText_Rom_5CA635) != 0x1f
	.error "gText_Rom_5CA635 must retain its original byte length"
	.endif
