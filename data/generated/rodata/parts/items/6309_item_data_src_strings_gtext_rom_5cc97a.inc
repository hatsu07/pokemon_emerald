	@ src/strings.c:761 gText_MemberDroppedOut
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC97A
gText_Rom_5CC97A: @ 0x085CC97A
	.string "  ぬけた メンバーが いるので\nゲームを しゅうりょうします$"
	.if (. - gText_Rom_5CC97A) != 0x20
	.error "gText_Rom_5CC97A must retain its original byte length"
	.endif
