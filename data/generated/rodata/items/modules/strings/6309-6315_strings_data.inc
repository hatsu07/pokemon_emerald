	@ src/strings.c:761 gText_MemberDroppedOut
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC97A
gText_Rom_5CC97A: @ 0x085CC97A
	.string "  ぬけた メンバーが いるので\nゲームを しゅうりょうします$"
	.if (. - gText_Rom_5CC97A) != 0x20
	.error "gText_Rom_5CC97A must retain its original byte length"
	.endif
	.globl gText_Rom_5CC97C
	.set gText_Rom_5CC97C, gText_Rom_5CC97A + 0x2
	.globl gText_Rom_5CC996
	.set gText_Rom_5CC996, gText_Rom_5CC97A + 0x1c

	@ src/strings.c:762 gText_TimesUpNoGoodPowder
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC99A
gText_Rom_5CC99A: @ 0x085CC99A
	.string "  じかんぎれ です\pよいこな が\nできあがり ませんでした\p$"
	.if (. - gText_Rom_5CC99A) != 0x20
	.error "gText_Rom_5CC99A must retain its original byte length"
	.endif
	.globl gText_Rom_5CC99C
	.set gText_Rom_5CC99C, gText_Rom_5CC99A + 0x2

	@ src/strings.c:763 gText_CommunicationStandby2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC9BA
gText_Rom_5CC9BA: @ 0x085CC9BA
	.string "  つうしんたいきちゅう$"
	.if (. - gText_Rom_5CC9BA) != 0xd
	.error "gText_Rom_5CC9BA must retain its original byte length"
	.endif
