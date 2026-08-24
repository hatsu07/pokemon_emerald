	.globl gText_Rom_5CC944
	.set gText_Rom_5CC944, gText_PlayBerryCrushAgain + 0x2
	@ asm/berry_crush.s:4221 sub_08022A78 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC95C
gText_Rom_5CC95C: @ 0x085CC95C
	.string "つかう　きのみが　ありません\nゲームを　しゅうりょうします{EOS}"
	.if (. - gText_Rom_5CC95C) != 0x1e
	.error "gText_Rom_5CC95C must retain its original byte length"
	.endif
	.globl gText_Rom_5CC976
	.set gText_Rom_5CC976, gText_Rom_5CC95C + 0x1a
	@ src/strings.c:761 gText_MemberDroppedOut
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MemberDroppedOut
gText_MemberDroppedOut: @ 0x085CC97A
	.string "  ぬけた メンバーが いるので\nゲームを しゅうりょうします{EOS}"
	.if (. - gText_MemberDroppedOut) != 0x20
	.error "gText_MemberDroppedOut must retain its original byte length"
	.endif
	.globl gText_Rom_5CC97C
	.set gText_Rom_5CC97C, gText_MemberDroppedOut + 0x2
	.globl gText_Rom_5CC996
	.set gText_Rom_5CC996, gText_MemberDroppedOut + 0x1c

	@ src/strings.c:762 gText_TimesUpNoGoodPowder
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_TimesUpNoGoodPowder
gText_TimesUpNoGoodPowder: @ 0x085CC99A
	.string "  じかんぎれ です\pよいこな が\nできあがり ませんでした\p{EOS}"
	.if (. - gText_TimesUpNoGoodPowder) != 0x20
	.error "gText_TimesUpNoGoodPowder must retain its original byte length"
	.endif
	.globl gText_Rom_5CC99C
	.set gText_Rom_5CC99C, gText_TimesUpNoGoodPowder + 0x2

	@ src/strings.c:763 gText_CommunicationStandby2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_CommunicationStandby2
gText_CommunicationStandby2: @ 0x085CC9BA
	.string "  つうしんたいきちゅう{EOS}"
	.if (. - gText_CommunicationStandby2) != 0xd
	.error "gText_CommunicationStandby2 must retain its original byte length"
	.endif
