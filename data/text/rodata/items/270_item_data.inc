	@ asm/berry_crush.s:4221 sub_08022A78 (+2 aliases)
	.globl gText_Rom_5CC8A0
gText_Rom_5CC8A0: @ 0x085CC8A0
	.string "きのみクラッシュを　はじめます\nつかう　きのみを　えらんでください\p$"
	.if (. - gText_Rom_5CC8A0) > 0x23
	.error "gText_Rom_5CC8A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC8A0) < 0x23
	.space 0x23 - (. - gText_Rom_5CC8A0)
	.endif

	@ src/strings.c:756 gText_WaitForAllChooseBerry
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC8C3
gText_Rom_5CC8C3: @ 0x085CC8C3
	.string " ほかの メンバーが きのみを\nえらぶまで おまちください$"
	.if (. - gText_Rom_5CC8C3) != 0x1e
	.error "gText_Rom_5CC8C3 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC8C4
	.set gText_Rom_5CC8C4, gText_Rom_5CC8C3 + 0x1
	.incbin "baserom.gba", 0x5cc8e1, 0x3

	@ asm/berry_crush.s:4221 sub_08022A78 (+1 aliases)
	.globl gText_Rom_5CC8E4
gText_Rom_5CC8E4: @ 0x085CC8E4
	.string "{PAUSE_MUSIC}{PLAY_BGM}{0x6F}{0x01}サラサラな　こなが\n{0xFD}{0x02}　できた！{RESUME_MUSIC}\pごうけいで　こなの　りょうが\n{0xFD}{0x03}　になった！\p$"
	.if (. - gText_Rom_5CC8E4) > 0x33
	.error "gText_Rom_5CC8E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC8E4) < 0x33
	.space 0x33 - (. - gText_Rom_5CC8E4)
	.endif

	@ src/strings.c:758 gText_RecordingGameResults
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC917
gText_Rom_5CC917: @ 0x085CC917
	.string " ゲームの けっかを\nポケモンレポートに かきこんでいます\lしばらく おまちください$"
	.if (. - gText_Rom_5CC917) != 0x2b
	.error "gText_Rom_5CC917 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC918
	.set gText_Rom_5CC918, gText_Rom_5CC917 + 0x1
	.globl gText_Rom_5CC935
	.set gText_Rom_5CC935, gText_Rom_5CC917 + 0x1e

	@ src/strings.c:759 gText_PlayBerryCrushAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC942
gText_Rom_5CC942: @ 0x085CC942
	.string "  きのみクラッシュで もういちど\nあそびますか?$"
	.if (. - gText_Rom_5CC942) != 0x1a
	.error "gText_Rom_5CC942 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC944
	.set gText_Rom_5CC944, gText_Rom_5CC942 + 0x2

	@ asm/berry_crush.s:4221 sub_08022A78 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC95C
gText_Rom_5CC95C: @ 0x085CC95C
	.string "つかう　きのみが　ありません\nゲームを　しゅうりょうします$"
	.if (. - gText_Rom_5CC95C) != 0x1e
	.error "gText_Rom_5CC95C must retain its original byte length"
	.endif
	.globl gText_Rom_5CC976
	.set gText_Rom_5CC976, gText_Rom_5CC95C + 0x1a

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
	.globl gText_Rom_5CC9BC
	.set gText_Rom_5CC9BC, gText_Rom_5CC9BA + 0x2
	.globl gText_Rom_5CC9BC
	.set gText_Rom_5CC9BC, gText_Rom_5CC9BA + 0x2
	.incbin "baserom.gba", 0x5cc9c7, 0x1
	.globl gUnknown_85CC9C8
gUnknown_85CC9C8: @ 0x085CC9C8

	@ asm/berry_crush.s:2144 sub_08021758
	.globl gText_Rom_5CC9C8
gText_Rom_5CC9C8: @ 0x085CC9C8
	.string "1,{COLOR}{0x08}{SHADOW}{0x09}{0xF7}{0x00}$"
	.if (. - gText_Rom_5CC9C8) > 0xb
	.error "gText_Rom_5CC9C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC9C8) < 0xb
	.space 0xb - (. - gText_Rom_5CC9C8)
	.endif
	.incbin "baserom.gba", 0x5cc9d3, 0x1
	.globl gUnknown_85CC9D4
gUnknown_85CC9D4: @ 0x085CC9D4

	@ asm/berry_crush.s:2157 sub_08021758
	.globl gText_Rom_5CC9D4
gText_Rom_5CC9D4: @ 0x085CC9D4
	.string "1,{0xF7}{0x00}$"
	.if (. - gText_Rom_5CC9D4) > 0x5
	.error "gText_Rom_5CC9D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC9D4) < 0x5
	.space 0x5 - (. - gText_Rom_5CC9D4)
	.endif

	@ src/strings.c:766 gText_SpaceTimes2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC9D9
gText_Rom_5CC9D9: @ 0x085CC9D9
	.string "   かい$"
	.if (. - gText_Rom_5CC9D9) != 0x6
	.error "gText_Rom_5CC9D9 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC9DB
	.set gText_Rom_5CC9DB, gText_Rom_5CC9D9 + 0x2
	.incbin "baserom.gba", 0x5cc9df, 0x7

	@ src/strings.c:768 gText_Var1Berry
	.globl gText_Rom_5CC9E6
gText_Rom_5CC9E6: @ 0x085CC9E6
	.string "  {STR_VAR_1}のみ$"
	.if (. - gText_Rom_5CC9E6) > 0x7
	.error "gText_Rom_5CC9E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC9E6) < 0x7
	.space 0x7 - (. - gText_Rom_5CC9E6)
	.endif

	@ src/strings.c:769 gText_TimeColon
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_5CC9ED
gText_Rom_5CC9ED: @ 0x085CC9ED
	.string "   じかん$"
	.if (. - gText_Rom_5CC9ED) != 0x7
	.error "gText_Rom_5CC9ED must retain its original byte length"
	.endif
	.globl gUnknown_85CC9F0
	.set gUnknown_85CC9F0, gText_Rom_5CC9ED + 0x3
	.globl gText_Rom_5CC9F0
	.set gText_Rom_5CC9F0, gText_Rom_5CC9ED + 0x3
	.globl gUnknown_85CC9F4
gUnknown_85CC9F4: @ 0x085CC9F4

	@ src/strings.c:770 gText_PressingSpeed
	.globl gText_Rom_5CC9F4
gText_Rom_5CC9F4: @ 0x085CC9F4
	.string "おすはやさ$"
	.if (. - gText_Rom_5CC9F4) > 0x6
	.error "gText_Rom_5CC9F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC9F4) < 0x6
	.space 0x6 - (. - gText_Rom_5CC9F4)
	.endif

	@ src/strings.c:771 gText_Silkiness
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_5CC9FA
gText_Rom_5CC9FA: @ 0x085CC9FA
	.string "  サラサラぐあい$"
	.if (. - gText_Rom_5CC9FA) != 0xa
	.error "gText_Rom_5CC9FA must retain its original byte length"
	.endif
	.globl gUnknown_85CC9FC
	.set gUnknown_85CC9FC, gText_Rom_5CC9FA + 0x2
	.globl gUnknown_85CCA04
gUnknown_85CCA04: @ 0x085CCA04
	.incbin "baserom.gba", 0x5cca04, 0x3

	@ src/strings.c:773 gText_SpaceMin
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_5CCA07
gText_Rom_5CCA07: @ 0x085CCA07
	.string " ふん$"
	.if (. - gText_Rom_5CCA07) != 0x4
	.error "gText_Rom_5CCA07 must retain its original byte length"
	.endif
	.globl gUnknown_85CCA08
	.set gUnknown_85CCA08, gText_Rom_5CCA07 + 0x1
	.incbin "baserom.gba", 0x5cca0b, 0x1
	.globl gUnknown_85CCA0C
gUnknown_85CCA0C: @ 0x085CCA0C

	@ asm/berry_crush.s:2305 sub_08021ABC
	.globl gText_Rom_5CCA0C
gText_Rom_5CCA0C: @ 0x085CCA0C
	.string "{0xFD}{0x02},{0xFD}{0x03}$"
	.if (. - gText_Rom_5CCA0C) > 0x6
	.error "gText_Rom_5CCA0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCA0C) < 0x6
	.space 0x6 - (. - gText_Rom_5CCA0C)
	.endif

	@ src/strings.c:775 gText_SpaceSec
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_5CCA12
gText_Rom_5CCA12: @ 0x085CCA12
	.string "  びょう$"
	.if (. - gText_Rom_5CCA12) != 0x6
	.error "gText_Rom_5CCA12 must retain its original byte length"
	.endif
	.globl gUnknown_85CCA14
	.set gUnknown_85CCA14, gText_Rom_5CCA12 + 0x2
	.globl gText_Rom_5CCA14
	.set gText_Rom_5CCA14, gText_Rom_5CCA12 + 0x2
	.globl gUnknown_85CCA18
gUnknown_85CCA18: @ 0x085CCA18

	@ asm/berry_crush.s:2452 sub_08021ABC
	.globl gText_Rom_5CCA18
gText_Rom_5CCA18: @ 0x085CCA18
	.string "{0xFD}{0x02},{0xFD}{0x03}$"
	.if (. - gText_Rom_5CCA18) > 0x6
	.error "gText_Rom_5CCA18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCA18) < 0x6
	.space 0x6 - (. - gText_Rom_5CCA18)
	.endif

	@ src/strings.c:777 gText_TimesPerSec
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_5CCA1E
gText_Rom_5CCA1E: @ 0x085CCA1E
	.string "  かい/びょう$"
	.if (. - gText_Rom_5CCA1E) != 0x9
	.error "gText_Rom_5CCA1E must retain its original byte length"
	.endif
	.globl gUnknown_85CCA20
	.set gUnknown_85CCA20, gText_Rom_5CCA1E + 0x2
	.globl gText_Rom_5CCA23
	.set gText_Rom_5CCA23, gText_Rom_5CCA1E + 0x5

	@ src/strings.c:778 gText_Var1Percent
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_5CCA27
gText_Rom_5CCA27: @ 0x085CCA27
	.string " {STR_VAR_1}パーセント$"
	.if (. - gText_Rom_5CCA27) != 0x9
	.error "gText_Rom_5CCA27 must retain its original byte length"
	.endif
	.globl gUnknown_85CCA28
	.set gUnknown_85CCA28, gText_Rom_5CCA27 + 0x1
	.globl gUnknown_85CCA30
gUnknown_85CCA30: @ 0x085CCA30

	@ src/strings.c:779 gText_PressesRankings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCA30
gText_Rom_5CCA30: @ 0x085CCA30
	.string "おした かいすう ランキング$"
	.if (. - gText_Rom_5CCA30) != 0xf
	.error "gText_Rom_5CCA30 must retain its original byte length"
	.endif
	.globl gText_Rom_5CCA39
	.set gText_Rom_5CCA39, gText_Rom_5CCA30 + 0x9

	@ src/strings.c:780 gText_CrushingResults
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_5CCA3F
gText_Rom_5CCA3F: @ 0x085CCA3F
	.string " つぶした けっか$"
	.if (. - gText_Rom_5CCA3F) != 0xa
	.error "gText_Rom_5CCA3F must retain its original byte length"
	.endif
	.globl gUnknown_85CCA40
	.set gUnknown_85CCA40, gText_Rom_5CCA3F + 0x1

	@ src/strings.c:781 gText_NeatnessRankings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCA49
gText_Rom_5CCA49: @ 0x085CCA49
	.string "   ていねいさ ランキング$"
	.if (. - gText_Rom_5CCA49) != 0xf
	.error "gText_Rom_5CCA49 must retain its original byte length"
	.endif
	.globl gText_Rom_5CCA52
	.set gText_Rom_5CCA52, gText_Rom_5CCA49 + 0x9

	@ src/strings.c:782 gText_CoopRankings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCA58
gText_Rom_5CCA58: @ 0x085CCA58
	.string "たすけあい ランキング$"
	.if (. - gText_Rom_5CCA58) != 0xc
	.error "gText_Rom_5CCA58 must retain its original byte length"
	.endif
	.globl gText_Rom_5CCA5E
	.set gText_Rom_5CCA5E, gText_Rom_5CCA58 + 0x6

	@ src/strings.c:783 gText_PressingPowerRankings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCA64
gText_Rom_5CCA64: @ 0x085CCA64
	.string "おすつよさ ランキング$"
	.if (. - gText_Rom_5CCA64) != 0xc
	.error "gText_Rom_5CCA64 must retain its original byte length"
	.endif
	.globl gText_Rom_5CCA6A
	.set gText_Rom_5CCA6A, gText_Rom_5CCA64 + 0x6
	.globl gUnknown_85CCA70
gUnknown_85CCA70: @ 0x085CCA70

