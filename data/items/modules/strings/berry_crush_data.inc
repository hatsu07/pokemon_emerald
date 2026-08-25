.if .L__inc_fragment_select_3cb6dffd0a3d == 1

	@ asm/berry_crush.s:4221 sub_08022A78 (+2 aliases)
	.globl gText_Rom_5CC8A0
gText_Rom_5CC8A0: @ 0x085CC8A0
	.string "きのみクラッシュを　はじめます\nつかう　きのみを　えらんでください\p{EOS}"
	.if (. - gText_Rom_5CC8A0) > 0x23
	.error "gText_Rom_5CC8A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC8A0) < 0x23
	.space 0x23 - (. - gText_Rom_5CC8A0)
	.endif
	@ src/strings.c:756 gText_WaitForAllChooseBerry
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_WaitForAllChooseBerry
gText_WaitForAllChooseBerry: @ 0x085CC8C3
	.string " ほかの メンバーが きのみを\nえらぶまで おまちください{EOS}"
	.if (. - gText_WaitForAllChooseBerry) != 0x1e
	.error "gText_WaitForAllChooseBerry must retain its original byte length"
	.endif
	.space 0x3, 0x00
	@ asm/berry_crush.s:4221 sub_08022A78 (+1 aliases)
	.globl gText_Rom_5CC8E4
gText_Rom_5CC8E4: @ 0x085CC8E4
	.string "{PAUSE_MUSIC}{PLAY_BGM}{0x6F}{0x01}サラサラな　こなが\n{0xFD}{0x02}　できた！{RESUME_MUSIC}\pごうけいで　こなの　りょうが\n{0xFD}{0x03}　になった！\p{EOS}"
	.if (. - gText_Rom_5CC8E4) > 0x33
	.error "gText_Rom_5CC8E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC8E4) < 0x33
	.space 0x33 - (. - gText_Rom_5CC8E4)
	.endif
	@ src/strings.c:758 gText_RecordingGameResults
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_RecordingGameResults
gText_RecordingGameResults: @ 0x085CC917
	.string " ゲームの けっかを\nポケモンレポートに かきこんでいます\lしばらく おまちください{EOS}"
	.if (. - gText_RecordingGameResults) != 0x2b
	.error "gText_RecordingGameResults must retain its original byte length"
	.endif

	@ src/strings.c:759 gText_PlayBerryCrushAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PlayBerryCrushAgain
gText_PlayBerryCrushAgain: @ 0x085CC942
	.string "  きのみクラッシュで もういちど\nあそびますか?{EOS}"
	.if (. - gText_PlayBerryCrushAgain) != 0x1a
	.error "gText_PlayBerryCrushAgain must retain its original byte length"
	.endif
.elseif .L__inc_fragment_select_3cb6dffd0a3d == 2

	@ src/strings.c:770 gText_PressingSpeed
	.globl gText_PressingSpeed
gText_PressingSpeed: @ 0x085CC9F4
	.string "おすはやさ{EOS}"
	.if (. - gText_PressingSpeed) > 0x6
	.error "gText_PressingSpeed may not grow beyond its original slot"
	.endif
	.if (. - gText_PressingSpeed) < 0x6
	.space 0x6 - (. - gText_PressingSpeed)
	.endif

	@ src/strings.c:771 gText_Silkiness
	@ Preserve exact byte length: internal label.
	.globl gText_Silkiness
gText_Silkiness: @ 0x085CC9FA
	.string "  サラサラぐあい{EOS}"
	.if (. - gText_Silkiness) != 0xa
	.error "gText_Silkiness must retain its original byte length"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085CCA04: berry_crush.s: sub_08021ABC
	.globl gBerryCrushData_085CCA04
gBerryCrushData_085CCA04: @ 0x085CCA04
	@ analyzed canonical ROM range 0x085CCA04-0x085CCA06
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0xFD, 0x02, 0xFF
	.globl gText_Rom_5CCA07
gText_Rom_5CCA07: @ 0x085CCA07
	.string " ふん{EOS}"
	.if (. - gText_Rom_5CCA07) != 0x4
	.error "gText_Rom_5CCA07 must retain its original byte length"
	.endif
.endif
