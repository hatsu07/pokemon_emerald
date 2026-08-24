
	@ src/data/easy_chat/easy_chat_group_greetings.h:106 easy_chat_group_greetings_line_106 (+1 aliases)
	.globl gText_Rom_5CC792
gText_Rom_5CC792: @ 0x085CC792
	.string "サンキュー{EOS}"
	.if (. - gText_Rom_5CC792) > 0x6
	.error "gText_Rom_5CC792 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC792) < 0x6
	.space 0x6 - (. - gText_Rom_5CC792)
	.endif

	@ src/strings.c:752 gText_ByeBye
	.globl gText_ByeBye
gText_ByeBye: @ 0x085CC798
	.string "バイバイ!{EOS}"
	.if (. - gText_ByeBye) > 0x6
	.error "gText_ByeBye may not grow beyond its original slot"
	.endif
	.if (. - gText_ByeBye) < 0x6
	.space 0x6 - (. - gText_ByeBye)
	.endif
	@ src/pokenav_match_call_data.c:645 gText_MatchCallSteven_Strategy
	.globl gText_MatchCallSteven_Strategy
gText_MatchCallSteven_Strategy: @ 0x085CC79E
	.string "あいての じゃくてんを つく!{EOS}"
	.if (. - gText_MatchCallSteven_Strategy) > 0x10
	.error "gText_MatchCallSteven_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSteven_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallSteven_Strategy)
	.endif

	@ src/pokenav_match_call_data.c:646 gText_MatchCallSteven_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallSteven_Pokemon
gText_MatchCallSteven_Pokemon: @ 0x085CC7AE
	.string "さいきょうの はがねポケモン{EOS}"
	.if (. - gText_MatchCallSteven_Pokemon) != 0xf
	.error "gText_MatchCallSteven_Pokemon must retain its original byte length"
	.endif
	@ ANALYSIS: RAW_RANGE offset=0x5CC7BD, size=0x6
	.byte 0x22, 0x3E, 0x27, 0x0C, 0x02, 0x00

	@ src/pokenav_match_call_data.c:666 pokenav_match_call_data_line_666
	.globl gText_Rom_5CC7C3
gText_Rom_5CC7C3: @ 0x085CC7C3
	.string "いしの ためなら{EOS}"
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
	.string "たきだって のぼって いくよ{EOS}"
	.if (. - gText_Rom_5CC7CC) != 0xf
	.error "gText_Rom_5CC7CC must retain its original byte length"
	.endif

	@ src/pokenav_match_call_data.c:677 pokenav_match_call_data_line_677
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC7DB
gText_Rom_5CC7DB: @ 0x085CC7DB
	.string "けっきょく ボクが いちばん{EOS}"
	.if (. - gText_Rom_5CC7DB) != 0xf
	.error "gText_Rom_5CC7DB must retain its original byte length"
	.endif

	@ src/pokenav_match_call_data.c:678 pokenav_match_call_data_line_678
	.globl gText_Rom_5CC7EA
gText_Rom_5CC7EA: @ 0x085CC7EA
	.string "つよくて すごいんだよね{EOS}"
	.if (. - gText_Rom_5CC7EA) > 0xd
	.error "gText_Rom_5CC7EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC7EA) < 0xd
	.space 0xd - (. - gText_Rom_5CC7EA)
	.endif

	@ src/pokenav_match_call_data.c:648 gText_MatchCallBrendan_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallBrendan_Strategy
gText_MatchCallBrendan_Strategy: @ 0x085CC7F7
	.string "ポケモンの ちしきで しょうぶ{EOS}"
	.if (. - gText_MatchCallBrendan_Strategy) != 0x10
	.error "gText_MatchCallBrendan_Strategy must retain its original byte length"
	.endif

	@ src/pokenav_match_call_data.c:649 gText_MatchCallBrendan_Pokemon
	.globl gText_MatchCallBrendan_Pokemon
gText_MatchCallBrendan_Pokemon: @ 0x085CC807
	.string "いろんな ポケモンを つかうぜ{EOS}"
	.if (. - gText_MatchCallBrendan_Pokemon) > 0x10
	.error "gText_MatchCallBrendan_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBrendan_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallBrendan_Pokemon)
	.endif

	@ src/pokenav_match_call_data.c:650 gText_MatchCallBrendan_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallBrendan_Intro1
gText_MatchCallBrendan_Intro1: @ 0x085CC817
	.string "とうさんより すごい ポケモン{EOS}"
	.if (. - gText_MatchCallBrendan_Intro1) != 0x10
	.error "gText_MatchCallBrendan_Intro1 must retain its original byte length"
	.endif

	@ src/pokenav_match_call_data.c:651 gText_MatchCallBrendan_Intro2
	.globl gText_MatchCallBrendan_Intro2
gText_MatchCallBrendan_Intro2: @ 0x085CC827
	.string "はかせに なって みせるさ!{EOS}"
	.if (. - gText_MatchCallBrendan_Intro2) > 0xf
	.error "gText_MatchCallBrendan_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBrendan_Intro2) < 0xf
	.space 0xf - (. - gText_MatchCallBrendan_Intro2)
	.endif

	@ src/pokenav_match_call_data.c:653 gText_MatchCallMay_Strategy
	.globl gText_MatchCallMay_Strategy
gText_MatchCallMay_Strategy: @ 0x085CC836
	.string "しょうぶは とくいじゃないかも{EOS}"
	.if (. - gText_MatchCallMay_Strategy) > 0x10
	.error "gText_MatchCallMay_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallMay_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallMay_Strategy)
	.endif

	@ src/pokenav_match_call_data.c:654 gText_MatchCallMay_Pokemon
	.globl gText_MatchCallMay_Pokemon
gText_MatchCallMay_Pokemon: @ 0x085CC846
	.string "どんな ポケモンでも つかうわ{EOS}"
	.if (. - gText_MatchCallMay_Pokemon) > 0x10
	.error "gText_MatchCallMay_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallMay_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallMay_Pokemon)
	.endif

	@ src/pokenav_match_call_data.c:655 gText_MatchCallMay_Intro1
	.globl gText_MatchCallMay_Intro1
gText_MatchCallMay_Intro1: @ 0x085CC856
	.string "ポケモン つれて おとうさんの{EOS}"
	.if (. - gText_MatchCallMay_Intro1) > 0x10
	.error "gText_MatchCallMay_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallMay_Intro1) < 0x10
	.space 0x10 - (. - gText_MatchCallMay_Intro1)
	.endif

	@ src/pokenav_match_call_data.c:656 gText_MatchCallMay_Intro2
	.globl gText_MatchCallMay_Intro2
gText_MatchCallMay_Intro2: @ 0x085CC866
	.string "けんきゅうを おてつだい!{EOS}"
	.if (. - gText_MatchCallMay_Intro2) > 0xe
	.error "gText_MatchCallMay_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallMay_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallMay_Intro2)
	.endif
