	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_5CC76F
gText_Rom_5CC76F: @ 0x085CC76F
	.string "ポケモン$"
	.if (. - gText_Rom_5CC76F) > 0x5
	.error "gText_Rom_5CC76F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC76F) < 0x5
	.space 0x5 - (. - gText_Rom_5CC76F)
	.endif
	.globl gUnknown_85CC774
gUnknown_85CC774: @ 0x085CC774

	@ src/data/easy_chat/easy_chat_group_trainer.h:16 easy_chat_group_trainer_line_16 (+2 aliases)
	.globl gText_Rom_5CC774
gText_Rom_5CC774: @ 0x085CC774
	.string "こうかん$"
	.if (. - gText_Rom_5CC774) > 0x5
	.error "gText_Rom_5CC774 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC774) < 0x5
	.space 0x5 - (. - gText_Rom_5CC774)
	.endif
	.globl gUnknown_85CC779
gUnknown_85CC779: @ 0x085CC779

	@ src/data/easy_chat/easy_chat_group_battle.h:172 easy_chat_group_battle_line_172 (+1 aliases)
	.globl gText_Rom_5CC779
gText_Rom_5CC779: @ 0x085CC779
	.string "たいせん$"
	.if (. - gText_Rom_5CC779) > 0x5
	.error "gText_Rom_5CC779 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC779) < 0x5
	.space 0x5 - (. - gText_Rom_5CC779)
	.endif
	.globl gUnknown_85CC77E
gUnknown_85CC77E: @ 0x085CC77E

	@ src/strings.c:747 gText_Lets
	.globl gText_Rom_5CC77E
gText_Rom_5CC77E: @ 0x085CC77E
	.string "しよう!$"
	.if (. - gText_Rom_5CC77E) > 0x5
	.error "gText_Rom_5CC77E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC77E) < 0x5
	.space 0x5 - (. - gText_Rom_5CC77E)
	.endif
	.globl gUnknown_85CC783
gUnknown_85CC783: @ 0x085CC783

	@ src/strings.c:748 gText_Ok
	.globl gText_Rom_5CC783
gText_Rom_5CC783: @ 0x085CC783
	.string "OK!$"
	.if (. - gText_Rom_5CC783) > 0x4
	.error "gText_Rom_5CC783 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC783) < 0x4
	.space 0x4 - (. - gText_Rom_5CC783)
	.endif
	.globl gUnknown_85CC787
gUnknown_85CC787: @ 0x085CC787

	@ src/strings.c:749 gText_Sorry
	.globl gText_Rom_5CC787
gText_Rom_5CC787: @ 0x085CC787
	.string "ごめん…$"
	.if (. - gText_Rom_5CC787) > 0x5
	.error "gText_Rom_5CC787 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC787) < 0x5
	.space 0x5 - (. - gText_Rom_5CC787)
	.endif
	.globl gUnknown_85CC78C
gUnknown_85CC78C: @ 0x085CC78C

	@ src/strings.c:750 gText_YaySmileEmoji
	.globl gText_Rom_5CC78C
gText_Rom_5CC78C: @ 0x085CC78C
	.string "わーい{EMOJI_BIGSMILE}$"
	.if (. - gText_Rom_5CC78C) > 0x6
	.error "gText_Rom_5CC78C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC78C) < 0x6
	.space 0x6 - (. - gText_Rom_5CC78C)
	.endif
	.globl gUnknown_85CC792
gUnknown_85CC792: @ 0x085CC792

	@ src/data/easy_chat/easy_chat_group_greetings.h:106 easy_chat_group_greetings_line_106 (+1 aliases)
	.globl gText_Rom_5CC792
gText_Rom_5CC792: @ 0x085CC792
	.string "サンキュー$"
	.if (. - gText_Rom_5CC792) > 0x6
	.error "gText_Rom_5CC792 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC792) < 0x6
	.space 0x6 - (. - gText_Rom_5CC792)
	.endif
	.globl gUnknown_85CC798
gUnknown_85CC798: @ 0x085CC798

	@ src/strings.c:752 gText_ByeBye
	.globl gText_Rom_5CC798
gText_Rom_5CC798: @ 0x085CC798
	.string "バイバイ!$"
	.if (. - gText_Rom_5CC798) > 0x6
	.error "gText_Rom_5CC798 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC798) < 0x6
	.space 0x6 - (. - gText_Rom_5CC798)
	.endif

	@ src/pokenav_match_call_data.c:645 gText_MatchCallSteven_Strategy
	.globl gText_Rom_5CC79E
gText_Rom_5CC79E: @ 0x085CC79E
	.string "あいての じゃくてんを つく!$"
	.if (. - gText_Rom_5CC79E) > 0x10
	.error "gText_Rom_5CC79E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC79E) < 0x10
	.space 0x10 - (. - gText_Rom_5CC79E)
	.endif

	@ src/pokenav_match_call_data.c:646 gText_MatchCallSteven_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC7AE
gText_Rom_5CC7AE: @ 0x085CC7AE
	.string "さいきょうの はがねポケモン$"
	.if (. - gText_Rom_5CC7AE) != 0xf
	.error "gText_Rom_5CC7AE must retain its original byte length"
	.endif
	.globl gText_Rom_5CC7B8
	.set gText_Rom_5CC7B8, gText_Rom_5CC7AE + 0xa
	@ Replaced baserom.gba range: offset=0x5CC7BD, size=0x6
	.byte 0x22, 0x3E, 0x27, 0x0C, 0x02, 0x00

	@ src/pokenav_match_call_data.c:666 pokenav_match_call_data_line_666
	.globl gText_Rom_5CC7C3
gText_Rom_5CC7C3: @ 0x085CC7C3
	.string "いしの ためなら$"
	.if (. - gText_Rom_5CC7C3) > 0x9
	.error "gText_Rom_5CC7C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC7C3) < 0x9
	.space 0x9 - (. - gText_Rom_5CC7C3)
	.endif

	@ src/pokenav_match_call_data.c:667 pokenav_match_call_data_line_667
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC7CC
gText_Rom_5CC7CC: @ 0x085CC7CC
	.string "たきだって のぼって いくよ$"
	.if (. - gText_Rom_5CC7CC) != 0xf
	.error "gText_Rom_5CC7CC must retain its original byte length"
	.endif
	.globl gText_Rom_5CC7D7
	.set gText_Rom_5CC7D7, gText_Rom_5CC7CC + 0xb

	@ src/pokenav_match_call_data.c:677 pokenav_match_call_data_line_677
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC7DB
gText_Rom_5CC7DB: @ 0x085CC7DB
	.string "けっきょく ボクが いちばん$"
	.if (. - gText_Rom_5CC7DB) != 0xf
	.error "gText_Rom_5CC7DB must retain its original byte length"
	.endif
	.globl gText_Rom_5CC7E5
	.set gText_Rom_5CC7E5, gText_Rom_5CC7DB + 0xa

	@ src/pokenav_match_call_data.c:678 pokenav_match_call_data_line_678
	.globl gText_Rom_5CC7EA
gText_Rom_5CC7EA: @ 0x085CC7EA
	.string "つよくて すごいんだよね$"
	.if (. - gText_Rom_5CC7EA) > 0xd
	.error "gText_Rom_5CC7EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC7EA) < 0xd
	.space 0xd - (. - gText_Rom_5CC7EA)
	.endif

	@ src/pokenav_match_call_data.c:648 gText_MatchCallBrendan_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC7F7
gText_Rom_5CC7F7: @ 0x085CC7F7
	.string "ポケモンの ちしきで しょうぶ$"
	.if (. - gText_Rom_5CC7F7) != 0x10
	.error "gText_Rom_5CC7F7 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC802
	.set gText_Rom_5CC802, gText_Rom_5CC7F7 + 0xb

	@ src/pokenav_match_call_data.c:649 gText_MatchCallBrendan_Pokemon
	.globl gText_Rom_5CC807
gText_Rom_5CC807: @ 0x085CC807
	.string "いろんな ポケモンを つかうぜ$"
	.if (. - gText_Rom_5CC807) > 0x10
	.error "gText_Rom_5CC807 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC807) < 0x10
	.space 0x10 - (. - gText_Rom_5CC807)
	.endif

	@ src/pokenav_match_call_data.c:650 gText_MatchCallBrendan_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC817
gText_Rom_5CC817: @ 0x085CC817
	.string "とうさんより すごい ポケモン$"
	.if (. - gText_Rom_5CC817) != 0x10
	.error "gText_Rom_5CC817 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC822
	.set gText_Rom_5CC822, gText_Rom_5CC817 + 0xb

	@ src/pokenav_match_call_data.c:651 gText_MatchCallBrendan_Intro2
	.globl gText_Rom_5CC827
gText_Rom_5CC827: @ 0x085CC827
	.string "はかせに なって みせるさ!$"
	.if (. - gText_Rom_5CC827) > 0xf
	.error "gText_Rom_5CC827 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC827) < 0xf
	.space 0xf - (. - gText_Rom_5CC827)
	.endif

	@ src/pokenav_match_call_data.c:653 gText_MatchCallMay_Strategy
	.globl gText_Rom_5CC836
gText_Rom_5CC836: @ 0x085CC836
	.string "しょうぶは とくいじゃないかも$"
	.if (. - gText_Rom_5CC836) > 0x10
	.error "gText_Rom_5CC836 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC836) < 0x10
	.space 0x10 - (. - gText_Rom_5CC836)
	.endif

	@ src/pokenav_match_call_data.c:654 gText_MatchCallMay_Pokemon
	.globl gText_Rom_5CC846
gText_Rom_5CC846: @ 0x085CC846
	.string "どんな ポケモンでも つかうわ$"
	.if (. - gText_Rom_5CC846) > 0x10
	.error "gText_Rom_5CC846 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC846) < 0x10
	.space 0x10 - (. - gText_Rom_5CC846)
	.endif

	@ src/pokenav_match_call_data.c:655 gText_MatchCallMay_Intro1
	.globl gText_Rom_5CC856
gText_Rom_5CC856: @ 0x085CC856
	.string "ポケモン つれて おとうさんの$"
	.if (. - gText_Rom_5CC856) > 0x10
	.error "gText_Rom_5CC856 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC856) < 0x10
	.space 0x10 - (. - gText_Rom_5CC856)
	.endif

	@ src/pokenav_match_call_data.c:656 gText_MatchCallMay_Intro2
	.globl gText_Rom_5CC866
gText_Rom_5CC866: @ 0x085CC866
	.string "けんきゅうを おてつだい!$"
	.if (. - gText_Rom_5CC866) > 0xe
	.error "gText_Rom_5CC866 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC866) < 0xe
	.space 0xe - (. - gText_Rom_5CC866)
	.endif
	.globl gUnknown_85CC874
gUnknown_85CC874: @ 0x085CC874

	@ src/strings.c:753 gText_HatchedFromEgg
	.globl gText_Rom_5CC874
gText_Rom_5CC874: @ 0x085CC874
	.string "タマゴが かえって\n{STR_VAR_1}が うまれた!$"
	.if (. - gText_Rom_5CC874) > 0x14
	.error "gText_Rom_5CC874 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC874) < 0x14
	.space 0x14 - (. - gText_Rom_5CC874)
	.endif
	.globl gUnknown_85CC888
gUnknown_85CC888: @ 0x085CC888

	@ src/strings.c:754 gText_NicknameHatchPrompt
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC888
gText_Rom_5CC888: @ 0x085CC888
	.string "うまれた {STR_VAR_1}に\nニックネームを つけますか？$"
	.if (. - gText_Rom_5CC888) != 0x18
	.error "gText_Rom_5CC888 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC88D
	.set gText_Rom_5CC88D, gText_Rom_5CC888 + 0x5

