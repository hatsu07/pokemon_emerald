	@ src/strings.c:480 gText_SomeonesPC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_SomeonesPC
gText_SomeonesPC: @ 0x085CACEC
	.string "だれかのパソコン{EOS}"
	.if (. - gText_SomeonesPC) != 0x9
	.error "gText_SomeonesPC must retain its original byte length"
	.endif
	.globl gText_Rom_5CACF0
	.set gText_Rom_5CACF0, gText_SomeonesPC + 0x4

	@ src/strings.c:481 gText_LanettesPC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_LanettesPC
gText_LanettesPC: @ 0x085CACF5
	.string "マユミのパソコン{EOS}"
	.if (. - gText_LanettesPC) != 0x9
	.error "gText_LanettesPC must retain its original byte length"
	.endif
	.globl gText_Rom_5CACF9
	.set gText_Rom_5CACF9, gText_LanettesPC + 0x4

	@ src/strings.c:483 gText_PlayersPC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PlayersPC
gText_PlayersPC: @ 0x085CACFE
	.string "{PLAYER}のパソコン{EOS}"
	.if (. - gText_PlayersPC) != 0x8
	.error "gText_PlayersPC must retain its original byte length"
	.endif
