	@ src/strings.c:483 gText_PlayersPC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CACFE
gText_Rom_5CACFE: @ 0x085CACFE
	.string "{PLAYER}のパソコン$"
	.if (. - gText_Rom_5CACFE) != 0x8
	.error "gText_Rom_5CACFE must retain its original byte length"
	.endif
