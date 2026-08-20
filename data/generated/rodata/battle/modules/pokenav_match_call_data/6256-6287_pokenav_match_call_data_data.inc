	@ src/pokenav_match_call_data.c:645 gText_MatchCallSteven_Strategy
	.globl gText_Rom_5CC79E
gText_Rom_5CC79E: @ 0x085CC79E
	.string "あいての じゃくてんを つく!{EOS}"
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
	.string "さいきょうの はがねポケモン{EOS}"
	.if (. - gText_Rom_5CC7AE) != 0xf
	.error "gText_Rom_5CC7AE must retain its original byte length"
	.endif
	.globl gText_Rom_5CC7B8
	.set gText_Rom_5CC7B8, gText_Rom_5CC7AE + 0xa
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
	.globl gText_Rom_5CC7D7
	.set gText_Rom_5CC7D7, gText_Rom_5CC7CC + 0xb

	@ src/pokenav_match_call_data.c:677 pokenav_match_call_data_line_677
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC7DB
gText_Rom_5CC7DB: @ 0x085CC7DB
	.string "けっきょく ボクが いちばん{EOS}"
	.if (. - gText_Rom_5CC7DB) != 0xf
	.error "gText_Rom_5CC7DB must retain its original byte length"
	.endif
	.globl gText_Rom_5CC7E5
	.set gText_Rom_5CC7E5, gText_Rom_5CC7DB + 0xa

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
	.globl gText_Rom_5CC7F7
gText_Rom_5CC7F7: @ 0x085CC7F7
	.string "ポケモンの ちしきで しょうぶ{EOS}"
	.if (. - gText_Rom_5CC7F7) != 0x10
	.error "gText_Rom_5CC7F7 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC802
	.set gText_Rom_5CC802, gText_Rom_5CC7F7 + 0xb

	@ src/pokenav_match_call_data.c:649 gText_MatchCallBrendan_Pokemon
	.globl gText_Rom_5CC807
gText_Rom_5CC807: @ 0x085CC807
	.string "いろんな ポケモンを つかうぜ{EOS}"
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
	.string "とうさんより すごい ポケモン{EOS}"
	.if (. - gText_Rom_5CC817) != 0x10
	.error "gText_Rom_5CC817 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC822
	.set gText_Rom_5CC822, gText_Rom_5CC817 + 0xb

	@ src/pokenav_match_call_data.c:651 gText_MatchCallBrendan_Intro2
	.globl gText_Rom_5CC827
gText_Rom_5CC827: @ 0x085CC827
	.string "はかせに なって みせるさ!{EOS}"
	.if (. - gText_Rom_5CC827) > 0xf
	.error "gText_Rom_5CC827 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC827) < 0xf
	.space 0xf - (. - gText_Rom_5CC827)
	.endif

	@ src/pokenav_match_call_data.c:653 gText_MatchCallMay_Strategy
	.globl gText_Rom_5CC836
gText_Rom_5CC836: @ 0x085CC836
	.string "しょうぶは とくいじゃないかも{EOS}"
	.if (. - gText_Rom_5CC836) > 0x10
	.error "gText_Rom_5CC836 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC836) < 0x10
	.space 0x10 - (. - gText_Rom_5CC836)
	.endif

	@ src/pokenav_match_call_data.c:654 gText_MatchCallMay_Pokemon
	.globl gText_Rom_5CC846
gText_Rom_5CC846: @ 0x085CC846
	.string "どんな ポケモンでも つかうわ{EOS}"
	.if (. - gText_Rom_5CC846) > 0x10
	.error "gText_Rom_5CC846 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC846) < 0x10
	.space 0x10 - (. - gText_Rom_5CC846)
	.endif

	@ src/pokenav_match_call_data.c:655 gText_MatchCallMay_Intro1
	.globl gText_Rom_5CC856
gText_Rom_5CC856: @ 0x085CC856
	.string "ポケモン つれて おとうさんの{EOS}"
	.if (. - gText_Rom_5CC856) > 0x10
	.error "gText_Rom_5CC856 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC856) < 0x10
	.space 0x10 - (. - gText_Rom_5CC856)
	.endif

	@ src/pokenav_match_call_data.c:656 gText_MatchCallMay_Intro2
	.globl gText_Rom_5CC866
gText_Rom_5CC866: @ 0x085CC866
	.string "けんきゅうを おてつだい!{EOS}"
	.if (. - gText_Rom_5CC866) > 0xe
	.error "gText_Rom_5CC866 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC866) < 0xe
	.space 0xe - (. - gText_Rom_5CC866)
	.endif
