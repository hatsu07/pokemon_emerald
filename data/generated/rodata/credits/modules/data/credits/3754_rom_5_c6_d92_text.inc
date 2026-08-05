	@ src/data/credits.h:86 sCreditsText_MapDataDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D92
gText_Rom_5C6D92: @ 0x085C6D92
	.string "マップデータ せってい$"
	.if (. - gText_Rom_5C6D92) != 0xc
	.error "gText_Rom_5C6D92 must retain its original byte length"
	.endif
