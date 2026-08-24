
	.globl gScriptCmdTable
gScriptCmdTable: @ 0x081DABAC
	script_cmd_handler 0x00, ScrCmd_nop
	script_cmd_handler 0x01, ScrCmd_nop1
	script_cmd_handler 0x02, ScrCmd_end
	script_cmd_handler 0x03, ScrCmd_return
	script_cmd_handler 0x04, ScrCmd_call
	script_cmd_handler 0x05, ScrCmd_goto
	script_cmd_handler 0x06, ScrCmd_goto_if
	script_cmd_handler 0x07, ScrCmd_call_if
	script_cmd_handler 0x08, ScrCmd_gotostd
	script_cmd_handler 0x09, ScrCmd_callstd
	script_cmd_handler 0x0A, ScrCmd_gotostd_if
	script_cmd_handler 0x0B, ScrCmd_callstd_if
	script_cmd_handler 0x0C, ScrCmd_returnram
	script_cmd_handler 0x0D, ScrCmd_killscript
	script_cmd_handler 0x0E, ScrCmd_setmysteryeventstatus
	script_cmd_handler 0x0F, ScrCmd_loadword
	script_cmd_handler 0x10, ScrCmd_loadbyte
	script_cmd_handler 0x11, ScrCmd_writebytetoaddr
	script_cmd_handler 0x12, ScrCmd_loadbytefromaddr
	script_cmd_handler 0x13, ScrCmd_setptrbyte
	script_cmd_handler 0x14, ScrCmd_copylocal
	script_cmd_handler 0x15, ScrCmd_copybyte
	script_cmd_handler 0x16, ScrCmd_setvar
	script_cmd_handler 0x17, ScrCmd_addvar
	script_cmd_handler 0x18, ScrCmd_subvar
	script_cmd_handler 0x19, ScrCmd_copyvar
	script_cmd_handler 0x1A, ScrCmd_setorcopyvar
	script_cmd_handler 0x1B, ScrCmd_compare_local_to_local
	script_cmd_handler 0x1C, ScrCmd_compare_local_to_value
	script_cmd_handler 0x1D, ScrCmd_compare_local_to_addr
	script_cmd_handler 0x1E, ScrCmd_compare_addr_to_local
	script_cmd_handler 0x1F, ScrCmd_compare_addr_to_value
	script_cmd_handler 0x20, ScrCmd_compare_addr_to_addr
	script_cmd_handler 0x21, ScrCmd_compare_var_to_value
	script_cmd_handler 0x22, ScrCmd_compare_var_to_var
	script_cmd_handler 0x23, ScrCmd_callnative
	script_cmd_handler 0x24, ScrCmd_gotonative
	script_cmd_handler 0x25, ScrCmd_special
	script_cmd_handler 0x26, ScrCmd_specialvar
	script_cmd_handler 0x27, ScrCmd_waitstate
	script_cmd_handler 0x28, ScrCmd_delay
	script_cmd_handler 0x29, ScrCmd_setflag
	script_cmd_handler 0x2A, ScrCmd_clearflag
	script_cmd_handler 0x2B, ScrCmd_checkflag
	script_cmd_handler 0x2C, ScrCmd_initclock
	script_cmd_handler 0x2D, ScrCmd_dotimebasedevents
	script_cmd_handler 0x2E, ScrCmd_gettime
	script_cmd_handler 0x2F, ScrCmd_playse
	script_cmd_handler 0x30, ScrCmd_waitse
	script_cmd_handler 0x31, ScrCmd_playfanfare
	script_cmd_handler 0x32, ScrCmd_waitfanfare
	script_cmd_handler 0x33, ScrCmd_playbgm
	script_cmd_handler 0x34, ScrCmd_savebgm
	script_cmd_handler 0x35, ScrCmd_fadedefaultbgm
	script_cmd_handler 0x36, ScrCmd_fadenewbgm
	script_cmd_handler 0x37, ScrCmd_fadeoutbgm
	script_cmd_handler 0x38, ScrCmd_fadeinbgm
	script_cmd_handler 0x39, ScrCmd_warp
	script_cmd_handler 0x3A, ScrCmd_warpsilent
	script_cmd_handler 0x3B, ScrCmd_warpdoor
	script_cmd_handler 0x3C, ScrCmd_warphole
	script_cmd_handler 0x3D, ScrCmd_warpteleport
	script_cmd_handler 0x3E, ScrCmd_setwarp
	script_cmd_handler 0x3F, ScrCmd_setdynamicwarp
	script_cmd_handler 0x40, ScrCmd_setdivewarp
	script_cmd_handler 0x41, ScrCmd_setholewarp
	script_cmd_handler 0x42, ScrCmd_getplayerxy
	script_cmd_handler 0x43, ScrCmd_getpartysize
	script_cmd_handler 0x44, ScrCmd_giveitem
	script_cmd_handler 0x45, ScrCmd_takeitem
	script_cmd_handler 0x46, ScrCmd_checkitemspace
	script_cmd_handler 0x47, ScrCmd_checkitem
	script_cmd_handler 0x48, ScrCmd_checkitemtype
	script_cmd_handler 0x49, ScrCmd_givepcitem
	script_cmd_handler 0x4A, ScrCmd_checkpcitem
	script_cmd_handler 0x4B, ScrCmd_givedecoration
	script_cmd_handler 0x4C, ScrCmd_takedecoration
	script_cmd_handler 0x4D, ScrCmd_checkdecor
	script_cmd_handler 0x4E, ScrCmd_checkdecorspace
	script_cmd_handler 0x4F, ScrCmd_applymovement
	script_cmd_handler 0x50, ScrCmd_applymovement_at
	script_cmd_handler 0x51, ScrCmd_waitmovement
	script_cmd_handler 0x52, ScrCmd_waitmovement_at
	script_cmd_handler 0x53, ScrCmd_removeobject
	script_cmd_handler 0x54, ScrCmd_removeobject_at
	script_cmd_handler 0x55, ScrCmd_addobject
	script_cmd_handler 0x56, ScrCmd_addobject_at
	script_cmd_handler 0x57, ScrCmd_setobjectxy
	script_cmd_handler 0x58, ScrCmd_showobject_at
	script_cmd_handler 0x59, ScrCmd_hideobject_at
	script_cmd_handler 0x5A, ScrCmd_faceplayer
	script_cmd_handler 0x5B, ScrCmd_turnobject
	script_cmd_handler 0x5C, ScrCmd_trainerbattle
	script_cmd_handler 0x5D, ScrCmd_dotrainerbattle
	script_cmd_handler 0x5E, ScrCmd_gotobeatenscript
	script_cmd_handler 0x5F, ScrCmd_gotopostbattlescript
	script_cmd_handler 0x60, ScrCmd_checktrainerflag
	script_cmd_handler 0x61, ScrCmd_settrainerflag
	script_cmd_handler 0x62, ScrCmd_cleartrainerflag
	script_cmd_handler 0x63, ScrCmd_setobjectxyperm
	script_cmd_handler 0x64, ScrCmd_moveobjectoffscreen
	script_cmd_handler 0x65, ScrCmd_setobjectmovementtype
	script_cmd_handler 0x66, ScrCmd_waitmessage
	script_cmd_handler 0x67, ScrCmd_message
	script_cmd_handler 0x68, ScrCmd_closemessage
	script_cmd_handler 0x69, ScrCmd_lockall
	script_cmd_handler 0x6A, ScrCmd_lock
	script_cmd_handler 0x6B, ScrCmd_releaseall
	script_cmd_handler 0x6C, ScrCmd_release
	script_cmd_handler 0x6D, ScrCmd_waitbuttonpress
	script_cmd_handler 0x6E, ScrCmd_yesnobox
	script_cmd_handler 0x6F, ScrCmd_multichoice
	script_cmd_handler 0x70, ScrCmd_multichoicedefault
	script_cmd_handler 0x71, ScrCmd_multichoicegrid
	script_cmd_handler 0x72, ScrCmd_erasebox
	script_cmd_handler 0x73, ScrCmd_drawboxtext
	script_cmd_handler 0x74, ScrCmd_mossdeepgym2
	script_cmd_handler 0x75, ScrCmd_showmonpic
	script_cmd_handler 0x76, ScrCmd_hidemonpic
	script_cmd_handler 0x77, ScrCmd_showcontestwinner
	script_cmd_handler 0x78, ScrCmd_braillemessage
	script_cmd_handler 0x79, ScrCmd_givemon
	script_cmd_handler 0x7A, ScrCmd_giveegg
	script_cmd_handler 0x7B, ScrCmd_setmonmove
	script_cmd_handler 0x7C, ScrCmd_checkpartymove
	script_cmd_handler 0x7D, ScrCmd_buffermovename
	script_cmd_handler 0x7E, ScrCmd_bufferleadmonspeciesname
	script_cmd_handler 0x7F, ScrCmd_bufferpartymonnick
	script_cmd_handler 0x80, ScrCmd_bufferitemname
	script_cmd_handler 0x81, ScrCmd_bufferspeciesname
	script_cmd_handler 0x82, ScrCmd_bufferdecorationname
	script_cmd_handler 0x83, ScrCmd_buffernumberstring
	script_cmd_handler 0x84, ScrCmd_bufferstdstring
	script_cmd_handler 0x85, ScrCmd_bufferstring
	script_cmd_handler 0x86, ScrCmd_pokemart
	script_cmd_handler 0x87, ScrCmd_pokemartdecoration
	script_cmd_handler 0x88, ScrCmd_pokemartdecoration2
	script_cmd_handler 0x89, ScrCmd_playslotmachine
	script_cmd_handler 0x8A, ScrCmd_setberrytree
	script_cmd_handler 0x8B, ScrCmd_showcontestresults
	script_cmd_handler 0x8C, ScrCmd_startcontest
	script_cmd_handler 0x8D, ScrCmd_choosecontestmon
	script_cmd_handler 0x8E, ScrCmd_contestlinktransfer
	script_cmd_handler 0x8F, ScrCmd_random
	script_cmd_handler 0x90, ScrCmd_givemoney
	script_cmd_handler 0x91, ScrCmd_takemoney
	script_cmd_handler 0x92, ScrCmd_checkmoney
	script_cmd_handler 0x93, ScrCmd_showmoneybox
	script_cmd_handler 0x94, ScrCmd_hidemoneybox
	script_cmd_handler 0x95, ScrCmd_updatemoneybox
	script_cmd_handler 0x96, ScrCmd_getpricereduction
	script_cmd_handler 0x97, ScrCmd_fadescreen
	script_cmd_handler 0x98, ScrCmd_fadescreenspeed
	script_cmd_handler 0x99, ScrCmd_setflashradius
	script_cmd_handler 0x9A, ScrCmd_animateflash
	script_cmd_handler 0x9B, ScrCmd_messageautoscroll
	script_cmd_handler 0x9C, ScrCmd_dofieldeffect
	script_cmd_handler 0x9D, ScrCmd_setfieldeffectarg
	script_cmd_handler 0x9E, ScrCmd_waitfieldeffect
	script_cmd_handler 0x9F, ScrCmd_setrespawn
	script_cmd_handler 0xA0, ScrCmd_checkplayergender
	script_cmd_handler 0xA1, ScrCmd_playmoncry
	script_cmd_handler 0xA2, ScrCmd_setmetatile
	script_cmd_handler 0xA3, ScrCmd_doweather
	script_cmd_handler 0xA4, ScrCmd_setweather
	script_cmd_handler 0xA5, ScrCmd_resetweather
	script_cmd_handler 0xA6, ScrCmd_setstepcallback
	script_cmd_handler 0xA7, ScrCmd_setmaplayoutindex
	script_cmd_handler 0xA8, ScrCmd_setobjectpriority
	script_cmd_handler 0xA9, ScrCmd_resetobjectpriority
	script_cmd_handler 0xAA, ScrCmd_createvobject
	script_cmd_handler 0xAB, ScrCmd_turnvobject
	script_cmd_handler 0xAC, ScrCmd_opendoor
	script_cmd_handler 0xAD, ScrCmd_closedoor
	script_cmd_handler 0xAE, ScrCmd_waitmoncry
	script_cmd_handler 0xAF, ScrCmd_setdooropen
	script_cmd_handler 0xB0, ScrCmd_setdoorclosed
	script_cmd_handler 0xB1, ScrCmd_addelevmenuitem
	script_cmd_handler 0xB2, ScrCmd_drawbox
	script_cmd_handler 0xB3, ScrCmd_checkcoins
	script_cmd_handler 0xB4, ScrCmd_givecoins
	script_cmd_handler 0xB5, ScrCmd_takecoins
	script_cmd_handler 0xB6, ScrCmd_setwildbattle
	script_cmd_handler 0xB7, ScrCmd_dowildbattle
	script_cmd_handler 0xB8, ScrCmd_setvaddress
	script_cmd_handler 0xB9, ScrCmd_vgoto
	script_cmd_handler 0xBA, ScrCmd_vcall
	script_cmd_handler 0xBB, ScrCmd_vgoto_if
	script_cmd_handler 0xBC, ScrCmd_vcall_if
	script_cmd_handler 0xBD, ScrCmd_vmessage
	script_cmd_handler 0xBE, ScrCmd_vloadword
	script_cmd_handler 0xBF, ScrCmd_vbufferstring
	script_cmd_handler 0xC0, ScrCmd_showcoinsbox
	script_cmd_handler 0xC1, ScrCmd_hidecoinsbox
	script_cmd_handler 0xC2, ScrCmd_updatecoinsbox
	script_cmd_handler 0xC3, ScrCmd_incrementgamestat
	script_cmd_handler 0xC4, ScrCmd_setescapewarp
	script_cmd_handler 0xC5, ScrCmd_waitdooranim
	script_cmd_handler 0xC6, ScrCmd_bufferboxname
	script_cmd_handler 0xC7, ScrCmd_nop1
	script_cmd_handler 0xC8, ScrCmd_nop1
	script_cmd_handler 0xC9, ScrCmd_nop1
	script_cmd_handler 0xCA, ScrCmd_nop1
	script_cmd_handler 0xCB, ScrCmd_nop1
	script_cmd_handler 0xCC, ScrCmd_nop1
	script_cmd_handler 0xCD, ScrCmd_setmonobedient
	script_cmd_handler 0xCE, ScrCmd_checkmonobedience
	script_cmd_handler 0xCF, ScrCmd_gotoram
	script_cmd_handler 0xD0, ScrCmd_nop1
	script_cmd_handler 0xD1, ScrCmd_warpD1
	script_cmd_handler 0xD2, ScrCmd_setmonmetlocation
	script_cmd_handler 0xD3, ScrCmd_mossdeepgym1
	script_cmd_handler 0xD4, sub_0809B48C
	script_cmd_handler 0xD5, ScrCmd_mossdeepgym3
	script_cmd_handler 0xD6, ScrCmd_buffercontesttype
	script_cmd_handler 0xD7, ScrCmd_warpD7
	script_cmd_handler 0xD8, ScrCmd_cmdD8
	script_cmd_handler 0xD9, ScrCmd_cmdD9
	script_cmd_handler 0xDA, ScrCmd_mossdeepgym4
	script_cmd_handler 0xDB, ScrCmd_cmdDB
	script_cmd_handler 0xDC, ScrCmd_fadescreenswapbuffers
	script_cmd_handler 0xDD, ScrCmd_buffertrainerclassname
	script_cmd_handler 0xDE, ScrCmd_buffertrainername
	script_cmd_handler 0xDF, ScrCmd_pokenavcall
	script_cmd_handler 0xE0, ScrCmd_warpE0
	.if (. - gScriptCmdTable) != 0x384
	.error "gScriptCmdTable size changed"
	.endif
	.globl gScriptCmdTableEnd
gScriptCmdTableEnd: @ 0x081DAF30
	.4byte ScrCmd_nop
	.if (. - gScriptCmdTableEnd) != 4
	.error "gScriptCmdTableEnd size changed"
	.endif
	.globl gSpecialVars
gSpecialVars: @ 0x081DAF34
	@ Script variables 0x8000..0x8015.
	script_special_var 0, gSpecialVar_0x8000
	script_special_var 1, gSpecialVar_0x8001
	script_special_var 2, gSpecialVar_0x8002
	script_special_var 3, gSpecialVar_0x8003
	script_special_var 4, gSpecialVar_0x8004
	script_special_var 5, gSpecialVar_0x8005
	script_special_var 6, gSpecialVar_0x8006
	script_special_var 7, gSpecialVar_0x8007
	script_special_var 8, gSpecialVar_0x8008
	script_special_var 9, gSpecialVar_0x8009
	script_special_var 10, gSpecialVar_0x800A
	script_special_var 11, gSpecialVar_0x800B
	script_special_var 12, gSpecialVar_Facing
	script_special_var 13, gSpecialVar_Result
	script_special_var 14, gSpecialVar_ItemId
	script_special_var 15, gSpecialVar_LastTalked
	script_special_var 16, gSpecialVar_ContestRank
	script_special_var 17, gSpecialVar_ContestCategory
	script_special_var 18, gSpecialVar_MonBoxId
	script_special_var 19, gSpecialVar_MonBoxPos
	script_special_var 20, gSpecialVar_Unused_0x8014
	script_special_var 21, gTrainerBattleOpponent_A
	.if (. - gSpecialVars) != 0x58
	.error "gSpecialVars size changed"
	.endif
	.globl gSpecials
gSpecials: @ 0x081DAF8C
	script_special_handler 0x000, HealPlayerParty
	script_special_handler 0x001, SetCableClubWarp
	script_special_handler 0x002, sub_080AF244
	script_special_handler 0x003, sub_080AF2F4
	script_special_handler 0x004, CleanupLinkRoomState
	script_special_handler 0x005, ExitLinkRoom
	script_special_handler 0x006, SetPlayerSecretBase
	script_special_handler 0x007, CheckPlayerHasSecretBase
	script_special_handler 0x008, EnterSecretBase
	script_special_handler 0x009, ClearAndLeaveSecretBase
	script_special_handler 0x00A, MoveOutOfSecretBase
	script_special_handler 0x00B, IsCurSecretBaseOwnedByAnotherPlayer
	script_special_handler 0x00C, GetCurSecretBaseRegistrationValidity
	script_special_handler 0x00D, ToggleCurSecretBaseRegistry
	script_special_handler 0x00E, ShowSecretBaseDecorationMenu
	script_special_handler 0x00F, ShowSecretBaseRegistryMenu
	script_special_handler 0x010, PrepSecretBaseBattleFlags
	script_special_handler 0x011, GetSecretBaseOwnerInteractionState
	script_special_handler 0x012, InitSecretBaseDecorationSprites
	script_special_handler 0x013, sub_08127DEC
	script_special_handler 0x014, sub_08129798
	script_special_handler 0x015, GetSecretBaseTypeInFrontOfPlayer
	script_special_handler 0x016, SetSecretBaseOwnerGfxId
	script_special_handler 0x017, sub_081296F0
	script_special_handler 0x018, EnterNewlyCreatedSecretBase
	script_special_handler 0x019, sub_080EAF54
	script_special_handler 0x01A, DoSecretBasePCTurnOffEffect
	script_special_handler 0x01B, RecordMixingPlayerSpotTriggered
	script_special_handler 0x01C, sub_080B2680
	script_special_handler 0x01D, sub_080B2728
	script_special_handler 0x01E, sub_080B2750
	script_special_handler 0x01F, CloseLink
	script_special_handler 0x020, ColosseumPlayerSpotTriggered
	script_special_handler 0x021, PlayerEnteredTradeSeat
	script_special_handler 0x022, nullsub_37
	script_special_handler 0x023, sub_080B2A00
	script_special_handler 0x024, sub_080B2784
	script_special_handler 0x025, GetLinkPartnerNames
	script_special_handler 0x026, SpawnLinkPartnerEventObject
	script_special_handler 0x027, SavePlayerParty
	script_special_handler 0x028, LoadPlayerParty
	script_special_handler 0x029, ChooseHalfPartyForBattle
	script_special_handler 0x02A, sp02A_crash_sound
	script_special_handler 0x02B, EventObjectInteractionGetBerryTreeData
	script_special_handler 0x02C, Bag_ChooseBerry
	script_special_handler 0x02D, EventObjectInteractionPlantBerryTree
	script_special_handler 0x02E, EventObjectInteractionPickBerryTree
	script_special_handler 0x02F, EventObjectInteractionRemoveBerryTree
	script_special_handler 0x030, EventObjectInteractionWaterBerryTree
	script_special_handler 0x031, PlayerHasBerries
	script_special_handler 0x032, IsEnigmaBerryValid
	script_special_handler 0x033, GetTrainerBattleMode
	script_special_handler 0x034, ShowTrainerIntroSpeech
	script_special_handler 0x035, ShowTrainerCantBattleSpeech
	script_special_handler 0x036, GetTrainerFlag
	script_special_handler 0x037, EndTrainerApproach
	script_special_handler 0x038, SetUpTrainerEncounterMusic
	script_special_handler 0x039, ShouldTryRematchBattle
	script_special_handler 0x03A, IsTrainerReadyForRematch
	script_special_handler 0x03B, BattleSetup_StartRematchBattle
	script_special_handler 0x03C, ShowPokemonStorageSystemPC
	script_special_handler 0x03D, HasEnoughMonsForDoubleBattle
	script_special_handler 0x03E, TurnOffTVScreen
	script_special_handler 0x03F, DoTVShow
	script_special_handler 0x040, DoPokeNews
	script_special_handler 0x041, special_0x44
	script_special_handler 0x042, special_0x45
	script_special_handler 0x043, InterviewBefore
	script_special_handler 0x044, InterviewAfter
	script_special_handler 0x045, sub_080F03E4
	script_special_handler 0x046, SetContestCategoryStringVarForInterview
	script_special_handler 0x047, special_0x4a
	script_special_handler 0x048, TV_IsScriptShowKindAlreadyInQueue
	script_special_handler 0x049, CheckForBigMovieOrEmergencyNewsOnTV
	script_special_handler 0x04A, GetMomOrDadStringForTVMessage
	script_special_handler 0x04B, ResetTVShowState
	script_special_handler 0x04C, sub_080F8BA4
	script_special_handler 0x04D, sub_080F8D34
	script_special_handler 0x04E, sub_080F90A4
	script_special_handler 0x04F, sub_080F8BD4
	script_special_handler 0x050, sub_080F8C14
	script_special_handler 0x051, sub_080F90E0
	script_special_handler 0x052, sub_080F8B3C
	script_special_handler 0x053, SetContestTrainerGfxIds
	script_special_handler 0x054, sub_080F87C0
	script_special_handler 0x055, sub_080F9200
	script_special_handler 0x056, sub_080F938C
	script_special_handler 0x057, sub_080F8B84
	script_special_handler 0x058, sub_080F880C
	script_special_handler 0x059, sub_080F888C
	script_special_handler 0x05A, sub_080F95B4
	script_special_handler 0x05B, GiveMonArtistRibbon
	script_special_handler 0x05C, sub_080B27AC
	script_special_handler 0x05D, SaveGame
	script_special_handler 0x05E, DoWateringBerryTreeAnim
	script_special_handler 0x05F, ShowEasyChatScreen
	script_special_handler 0x060, sub_0811F3AC
	script_special_handler 0x061, ScrSpecial_GetCurrentMauvilleMan
	script_special_handler 0x062, ScrSpecial_HasBardSongBeenChanged
	script_special_handler 0x063, ScrSpecial_SaveBardSongLyrics
	script_special_handler 0x064, ScrSpecial_GetHipsterSpokenFlag
	script_special_handler 0x065, ScrSpecial_SetHipsterSpokenFlag
	script_special_handler 0x066, ScrSpecial_HipsterTeachWord
	script_special_handler 0x067, ScrSpecial_PlayBardSong
	script_special_handler 0x068, ScrSpecial_SetMauvilleOldManEventObjGfx
	script_special_handler 0x069, ScrSpecial_GenerateGiddyLine
	script_special_handler 0x06A, ScrSpecial_GiddyShouldTellAnotherTale
	script_special_handler 0x06B, ScrSpecial_StorytellerInitializeRandomStat
	script_special_handler 0x06C, sub_0812148C
	script_special_handler 0x06D, ScrSpecial_StorytellerStoryListMenu
	script_special_handler 0x06E, ScrSpecial_StorytellerUpdateStat
	script_special_handler 0x06F, SanitizeReceivedEmeraldOldMan
	script_special_handler 0x070, ScrSpecial_HasStorytellerAlreadyRecorded
	script_special_handler 0x071, ScrSpecial_TraderMenuGetDecoration
	script_special_handler 0x072, ScrSpecial_GetTraderTradedFlag
	script_special_handler 0x073, ScrSpecial_DoesPlayerHaveNoDecorations
	script_special_handler 0x074, sub_08133CD4
	script_special_handler 0x075, CreateAvailableDecorationsMenu
	script_special_handler 0x076, ScrSpecial_TraderDoDecorationTrade
	script_special_handler 0x077, sub_080FA300
	script_special_handler 0x078, sub_080FA31C
	script_special_handler 0x079, sub_080FA358
	script_special_handler 0x07A, sub_080FA374
	script_special_handler 0x07B, TV_PutNameRaterShowOnTheAirIfNicknameChanged
	script_special_handler 0x07C, TV_CopyNicknameToStringVar1AndEnsureTerminated
	script_special_handler 0x07D, TV_CheckMonOTIDEqualsPlayerID
	script_special_handler 0x07E, BufferTrendyPhraseString
	script_special_handler 0x07F, TrendyPhraseIsOld
	script_special_handler 0x080, sub_0811F44C
	script_special_handler 0x081, GetDewfordHallPaintingNameIndex
	script_special_handler 0x082, SwapRegisteredBike
	script_special_handler 0x083, CalculatePlayerPartyCount
	script_special_handler 0x084, CountPartyNonEggMons
	script_special_handler 0x085, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
	script_special_handler 0x086, sub_080F9178
	script_special_handler 0x087, sub_080F916C
	script_special_handler 0x088, sub_080F90F4
	script_special_handler 0x089, CountPlayerContestPaintings
	script_special_handler 0x08A, ShowContestWinner
	script_special_handler 0x08B, MauvilleGymSpecial2
	script_special_handler 0x08C, MauvilleGymSpecial1
	script_special_handler 0x08D, ShowFieldMessageStringVar4
	script_special_handler 0x08E, DrawWholeMapView
	script_special_handler 0x08F, StorePlayerCoordsInVars
	script_special_handler 0x090, MauvilleGymSpecial3
	script_special_handler 0x091, PetalburgGymSpecial1
	script_special_handler 0x092, PetalburgGymSpecial2
	script_special_handler 0x093, GetPlayerTrainerIdOnesDigit
	script_special_handler 0x094, GetPlayerBigGuyGirlString
	script_special_handler 0x095, GetRivalSonDaughterString
	script_special_handler 0x096, SetFlagInVar
	script_special_handler 0x097, CableCarWarp
	script_special_handler 0x098, CableCar
	script_special_handler 0x099, Overworld_PlaySpecialMapMusic
	script_special_handler 0x09A, StartWallClock
	script_special_handler 0x09B, Special_ViewWallClock
	script_special_handler 0x09C, ChooseStarter
	script_special_handler 0x09D, StartWallyTutorialBattle
	script_special_handler 0x09E, ChangePokemonNickname
	script_special_handler 0x09F, sub_081B9150
	script_special_handler 0x0A0, sub_08136F64
	script_special_handler 0x0A1, DoBerryBlending
	script_special_handler 0x0A2, PlayRoulette
	script_special_handler 0x0A3, ShouldMoveLilycoveFanClubMember
	script_special_handler 0x0A4, GetNumMovedLilycoveFanClubMembers
	script_special_handler 0x0A5, BufferStreakTrainerText
	script_special_handler 0x0A6, sub_0813BA68
	script_special_handler 0x0A7, UpdateMovedLilycoveFanClubMembers
	script_special_handler 0x0A8, sub_0813BF84
	script_special_handler 0x0A9, sub_0813BA98
	script_special_handler 0x0AA, sub_0813BFA0
	script_special_handler 0x0AB, RockSmashWildEncounter
	script_special_handler 0x0AC, GabbyAndTyGetBattleNum
	script_special_handler 0x0AD, GabbyAndTyAfterInterview
	script_special_handler 0x0AE, GabbyAndTyBeforeInterview
	script_special_handler 0x0AF, DoTVShowInSearchOfTrainers
	script_special_handler 0x0B0, IsTVShowInSearchOfTrainersAiring
	script_special_handler 0x0B1, GabbyAndTyGetLastQuote
	script_special_handler 0x0B2, GabbyAndTyGetLastBattleTrivia
	script_special_handler 0x0B3, GabbyAndTySetScriptVarsToEventObjectLocalIds
	script_special_handler 0x0B4, GetBattleOutcome
	script_special_handler 0x0B5, GetDaycareMonNicknames
	script_special_handler 0x0B6, GetDaycareState
	script_special_handler 0x0B7, RejectEggFromDayCare
	script_special_handler 0x0B8, GiveEggFromDaycare
	script_special_handler 0x0B9, SetDaycareCompatibilityString
	script_special_handler 0x0BA, GetSelectedMonNickAndSpecies
	script_special_handler 0x0BB, StoreSelectedPokemonInDaycare
	script_special_handler 0x0BC, ChooseSendDaycareMon
	script_special_handler 0x0BD, ShowDaycareLevelMenu
	script_special_handler 0x0BE, GetNumLevelsGainedFromDaycare
	script_special_handler 0x0BF, GetDaycareCost
	script_special_handler 0x0C0, TakePokemonFromDaycare
	script_special_handler 0x0C1, ScriptHatchMon
	script_special_handler 0x0C2, EggHatch
	script_special_handler 0x0C3, sub_0807101C
	script_special_handler 0x0C4, ShowLinkBattleRecords
	script_special_handler 0x0C5, IsEnoughForCostInVar0x8005
	script_special_handler 0x0C6, SubtractMoneyFromVar0x8005
	script_special_handler 0x0C7, ExecuteWhiteOut
	script_special_handler 0x0C8, sp0C8_whiteout_maybe
	script_special_handler 0x0C9, RotatingGate_InitPuzzle
	script_special_handler 0x0CA, RotatingGate_InitPuzzleAndGraphics
	script_special_handler 0x0CB, SetSSTidalFlag
	script_special_handler 0x0CC, ResetSSTidalFlag
	script_special_handler 0x0CD, EnterSafariMode
	script_special_handler 0x0CE, ExitSafariMode
	script_special_handler 0x0CF, GetPokeblockFeederInFront
	script_special_handler 0x0D0, sub_08135958
	script_special_handler 0x0D1, IsMirageIslandPresent
	script_special_handler 0x0D2, UpdateShoalTideFlag
	script_special_handler 0x0D3, InitBirchState
	script_special_handler 0x0D4, ScriptGetPokedexInfo
	script_special_handler 0x0D5, ShowPokedexRatingMessage
	script_special_handler 0x0D6, DoLotteryCornerComputerEffect
	script_special_handler 0x0D7, DoPCTurnOffEffect
	script_special_handler 0x0D8, SetDepartmentStoreFloorVar
	script_special_handler 0x0D9, DoPCTurnOnEffect
	script_special_handler 0x0DA, EndLotteryCornerComputerEffect
	script_special_handler 0x0DB, sub_081B91BC
	script_special_handler 0x0DC, sub_081B932C
	script_special_handler 0x0DD, sub_081B9410
	script_special_handler 0x0DE, sub_081B93B8
	script_special_handler 0x0DF, sub_081B9370
	script_special_handler 0x0E0, TeachMoveRelearnerMove
	script_special_handler 0x0E1, GetRecordedCyclingRoadResults
	script_special_handler 0x0E2, Special_BeginCyclingRoadChallenge
	script_special_handler 0x0E3, GetPlayerAvatarBike
	script_special_handler 0x0E4, FinishCyclingRoadChallenge
	script_special_handler 0x0E5, UpdateCyclingRoadState
	script_special_handler 0x0E6, GetLeadMonFriendshipScore
	script_special_handler 0x0E7, CallFrontierUtilFunc
	script_special_handler 0x0E8, sub_08161E88
	script_special_handler 0x0E9, sub_0818E608
	script_special_handler 0x0EA, CallBattlePalaceFunction
	script_special_handler 0x0EB, CopyEReaderTrainerGreeting
	script_special_handler 0x0EC, DoSpecialTrainerBattle
	script_special_handler 0x0ED, CallBattleArenaFunction
	script_special_handler 0x0EE, CallBattleFactoryFunction
	script_special_handler 0x0EF, CallBattlePikeFunction
	script_special_handler 0x0F0, CallBattlePyramidFunction
	script_special_handler 0x0F1, StopMapMusic
	script_special_handler 0x0F2, sub_081B9654
	script_special_handler 0x0F3, sub_081B9820
	script_special_handler 0x0F4, sub_081B99A8
	script_special_handler 0x0F5, sub_080F9D20
	script_special_handler 0x0F6, ValidateEReaderTrainer
	script_special_handler 0x0F7, GetBestBattleTowerStreak
	script_special_handler 0x0F8, ReducePlayerPartyToSelectedMons
	script_special_handler 0x0F9, BedroomPC
	script_special_handler 0x0FA, PlayerPC
	script_special_handler 0x0FB, FieldShowRegionMap
	script_special_handler 0x0FC, GetInGameTradeSpeciesInfo
	script_special_handler 0x0FD, CreateInGameTradePokemon
	script_special_handler 0x0FE, DoInGameTradeScene
	script_special_handler 0x0FF, GetTradeSpecies
	script_special_handler 0x100, GetWeekCount
	script_special_handler 0x101, RetrieveLotteryNumber
	script_special_handler 0x102, PickLotteryCornerTicket
	script_special_handler 0x103, ShowBerryBlenderRecordWindow
	script_special_handler 0x104, SetTrickHouseEndRoomFlag
	script_special_handler 0x105, ResetTrickHouseEndRoomFlag
	script_special_handler 0x106, sub_080E1850
	script_special_handler 0x107, AccessHallOfFamePC
	script_special_handler 0x108, Special_ShowDiploma
	script_special_handler 0x109, CheckLeadMonCool
	script_special_handler 0x10A, CheckLeadMonBeauty
	script_special_handler 0x10B, CheckLeadMonCute
	script_special_handler 0x10C, CheckLeadMonSmart
	script_special_handler 0x10D, CheckLeadMonTough
	script_special_handler 0x10E, sub_080FC014
	script_special_handler 0x10F, DoSoftReset
	script_special_handler 0x110, GameClear
	script_special_handler 0x111, ShakeScreenInElevator
	script_special_handler 0x112, nullsub_55
	script_special_handler 0x113, SpawnCameraObject
	script_special_handler 0x114, RemoveCameraObject
	script_special_handler 0x115, GetPokeblockNameByMonNature
	script_special_handler 0x116, GetSecretBaseNearbyMapName
	script_special_handler 0x117, CheckRelicanthWailord
	script_special_handler 0x118, ShouldDoBrailleRegirockEffectOld
	script_special_handler 0x119, sub_080AFE30
	script_special_handler 0x11A, sub_080AFE88
	script_special_handler 0x11B, WaitWeather
	script_special_handler 0x11C, BufferEReaderTrainerName
	script_special_handler 0x11D, GetSlotMachineId
	script_special_handler 0x11E, GetPlayerFacingDirection
	script_special_handler 0x11F, FoundAbandonedShipRoom1Key
	script_special_handler 0x120, FoundAbandonedShipRoom2Key
	script_special_handler 0x121, FoundAbandonedShipRoom4Key
	script_special_handler 0x122, FoundAbandonedShipRoom6Key
	script_special_handler 0x123, LeadMonHasEffortRibbon
	script_special_handler 0x124, GiveLeadMonEffortRibbon
	script_special_handler 0x125, Special_AreLeadMonEVsMaxedOut
	script_special_handler 0x126, sub_08097EFC
	script_special_handler 0x127, sub_08097F24
	script_special_handler 0x128, InitRoamer
	script_special_handler 0x129, TryUpdateRusturfTunnelState
	script_special_handler 0x12A, IsGrassTypeInParty
	script_special_handler 0x12B, sub_080AF55C
	script_special_handler 0x12C, PutZigzagoonInPlayerParty
	script_special_handler 0x12D, IsStarterInParty
	script_special_handler 0x12E, DeleteRegistry_Yes
	script_special_handler 0x12F, ScriptCheckFreePokemonStorageSpace
	script_special_handler 0x130, DoSealedChamberShakingEffect1
	script_special_handler 0x131, sub_08139BD4
	script_special_handler 0x132, GetShieldToyTVDecorationInfo
	script_special_handler 0x133, IsPokerusInParty
	script_special_handler 0x134, SetSootopolisGymCrackedIceMetatiles
	script_special_handler 0x135, sub_081395D0
	script_special_handler 0x136, StartGroudonKyogreBattle
	script_special_handler 0x137, BattleSetup_StartLegendaryBattle
	script_special_handler 0x138, StartRegiBattle
	script_special_handler 0x139, SetUpTrainerMovement
	script_special_handler 0x13A, DoSealedChamberShakingEffect2
	script_special_handler 0x13B, FoundBlackGlasses
	script_special_handler 0x13C, StartDroughtWeatherBlend
	script_special_handler 0x13D, DoDiveWarp
	script_special_handler 0x13E, DoFallWarp
	script_special_handler 0x13F, ShowContestEntryMonPic
	script_special_handler 0x140, sub_080F9748
	script_special_handler 0x141, SetEReaderTrainerGfxId
	script_special_handler 0x142, BattleSetup_StartLatiBattle
	script_special_handler 0x143, SetRoute119Weather
	script_special_handler 0x144, SetRoute123Weather
	script_special_handler 0x145, ScriptGetMultiplayerId
	script_special_handler 0x146, ScriptGetPartyMonSpecies
	script_special_handler 0x147, sub_081B957C
	script_special_handler 0x148, nullsub_54
	script_special_handler 0x149, MoveOutOfSecretBaseFromOutside
	script_special_handler 0x14A, LoadPlayerBag
	script_special_handler 0x14B, sub_080AFEB0
	script_special_handler 0x14C, SetPacifidlogTMReceivedDay
	script_special_handler 0x14D, GetDaysUntilPacifidlogTMAvailable
	script_special_handler 0x14E, HasAllHoennMons
	script_special_handler 0x14F, MonOTNameMatchesPlayer
	script_special_handler 0x150, BufferLottoTicketNumber
	script_special_handler 0x151, sub_08165248
	script_special_handler 0x152, sub_080F9C00
	script_special_handler 0x153, ScriptRandom
	script_special_handler 0x154, sub_081AFAA8
	script_special_handler 0x155, sub_080EE808
	script_special_handler 0x156, sub_080EEDEC
	script_special_handler 0x157, sub_080EF244
	script_special_handler 0x158, sub_080EF2D8
	script_special_handler 0x159, nullsub_55
	script_special_handler 0x15A, PutFanClubSpecialOnTheAir
	script_special_handler 0x15B, sub_080EF814
	script_special_handler 0x15C, sub_080EF838
	script_special_handler 0x15D, sub_080EBD4C
	script_special_handler 0x15E, SetSecretBaseSecretsTvFlags_SandOrnament
	script_special_handler 0x15F, sub_080EBEA0
	script_special_handler 0x160, GetSecretBaseName
	script_special_handler 0x161, sub_080EBF08
	script_special_handler 0x162, CopyCurSecretBaseOwnerName_StrVar1
	script_special_handler 0x163, sub_080EBE30
	script_special_handler 0x164, sub_080EBE68
	script_special_handler 0x165, SetSecretBaseSecretsTvFlags_MiscFurnature
	script_special_handler 0x166, SetSecretBaseSecretsTvFlags_LargeDecorationSpot
	script_special_handler 0x167, SetSecretBaseSecretsTvFlags_SmallDecorationSpot
	script_special_handler 0x168, SetSecretBaseSecretsTvFlags_Poster
	script_special_handler 0x169, sub_0818D6EC
	script_special_handler 0x16A, sub_0818D818
	script_special_handler 0x16B, sub_0818D914
	script_special_handler 0x16C, sub_0818D958
	script_special_handler 0x16D, sub_0818D98C
	script_special_handler 0x16E, sub_0818D9E4
	script_special_handler 0x16F, sub_0818DA30
	script_special_handler 0x170, sub_0818DA60
	script_special_handler 0x171, sub_0818DA84
	script_special_handler 0x172, sub_0818DB50
	script_special_handler 0x173, sub_0818DB68
	script_special_handler 0x174, sub_0818DBAC
	script_special_handler 0x175, sub_0818DBE8
	script_special_handler 0x176, sub_0818DD44
	script_special_handler 0x177, sub_0818DD78
	script_special_handler 0x178, sub_0818DF34
	script_special_handler 0x179, sub_0811B0A8
	script_special_handler 0x17A, sub_0818DF58
	script_special_handler 0x17B, sub_0818DF64
	script_special_handler 0x17C, sub_0818DFB4
	script_special_handler 0x17D, sub_0818DFD8
	script_special_handler 0x17E, sub_0818DEF4
	script_special_handler 0x17F, sub_0818DFF8
	script_special_handler 0x180, sub_0818E018
	script_special_handler 0x181, sub_0818E03C
	script_special_handler 0x182, sub_0818E08C
	script_special_handler 0x183, sub_0818E0D8
	script_special_handler 0x184, sub_0818E0EC
	script_special_handler 0x185, sub_081398CC
	script_special_handler 0x186, sub_0818E100
	script_special_handler 0x187, sub_0818E16C
	script_special_handler 0x188, sub_0818E194
	script_special_handler 0x189, sub_0818DED0
	script_special_handler 0x18A, sub_0818E048
	script_special_handler 0x18B, sub_0818E53C
	script_special_handler 0x18C, sub_0818E510
	script_special_handler 0x18D, sub_0818E570
	script_special_handler 0x18E, sub_0818E588
	script_special_handler 0x18F, sub_0818E59C
	script_special_handler 0x190, sub_0818E5BC
	script_special_handler 0x191, sub_0818E5EC
	script_special_handler 0x192, PutLilycoveContestLadyShowOnTheAir
	script_special_handler 0x193, sub_0813B8B8
	script_special_handler 0x194, CallApprenticeFunction
	script_special_handler 0x195, ShouldTryGetTrainerScript
	script_special_handler 0x196, ShowMapNamePopup
	script_special_handler 0x197, ShowMapNamePopup
	script_special_handler 0x198, DoMirageTowerCeilingCrumble
	script_special_handler 0x199, SetMirageTowerVisibility
	script_special_handler 0x19A, StartPlayerDescendMirageTower
	script_special_handler 0x19B, sub_08139938
	script_special_handler 0x19C, IsWirelessAdapterConnected
	script_special_handler 0x19D, BerryBlenderLinkBecomeLeader
	script_special_handler 0x19E, BerryBlenderLinkJoinGroup
	script_special_handler 0x19F, UnionRoomSpecial
	script_special_handler 0x1A0, sub_08019EE4
	script_special_handler 0x1A1, sub_08016448
	script_special_handler 0x1A2, sp182_move_string
	script_special_handler 0x1A3, sub_0801DA30
	script_special_handler 0x1A4, sub_081B85F8
	script_special_handler 0x1A5, sub_08017B4C
	script_special_handler 0x1A6, sub_08139980
	script_special_handler 0x1A7, ValidateReceivedWonderCard
	script_special_handler 0x1A8, HasAtLeastOneBerry
	script_special_handler 0x1A9, sub_0802C614
	script_special_handler 0x1AA, sub_0802E0BC
	script_special_handler 0x1AB, sub_0802781C
	script_special_handler 0x1AC, sub_0802786C
	script_special_handler 0x1AD, sub_081399F4
	script_special_handler 0x1AE, sub_08139A68
	script_special_handler 0x1AF, sub_08139DD4
	script_special_handler 0x1B0, sub_080F98EC
	script_special_handler 0x1B1, sub_0800AFEC
	script_special_handler 0x1B2, sub_080F996C
	script_special_handler 0x1B3, sub_080F999C
	script_special_handler 0x1B4, sub_080F99F0
	script_special_handler 0x1B5, ShowRankingHallRecordsWindow
	script_special_handler 0x1B6, ScrollRankingHallRecordsWindow
	script_special_handler 0x1B7, sub_08139F5C
	script_special_handler 0x1B8, sub_080F99C4
	script_special_handler 0x1B9, sub_080F99E4
	script_special_handler 0x1BA, sub_080B27D4
	script_special_handler 0x1BB, sub_0813A164
	script_special_handler 0x1BC, sub_0813A638
	script_special_handler 0x1BD, sub_0813A0BC
	script_special_handler 0x1BE, sub_081C62AC
	script_special_handler 0x1BF, sub_081C472C
	script_special_handler 0x1C0, sub_081B9280
	script_special_handler 0x1C1, sub_081B92C0
	script_special_handler 0x1C2, sub_0813A774
	script_special_handler 0x1C3, sub_0813A7C0
	script_special_handler 0x1C4, sub_0813A904
	script_special_handler 0x1C5, sub_0813A98C
	script_special_handler 0x1C6, sub_0813A9D4
	script_special_handler 0x1C7, sub_0813AA1C
	script_special_handler 0x1C8, sub_0813A9F0
	script_special_handler 0x1C9, sub_0813AA50
	script_special_handler 0x1CA, sub_0813AA64
	script_special_handler 0x1CB, sub_0813AA90
	script_special_handler 0x1CC, DisplayBerryPowderVendorMenu
	script_special_handler 0x1CD, RemoveBerryPowderVendorMenu
	script_special_handler 0x1CE, HasEnoughBerryPowder
	script_special_handler 0x1CF, TakeBerryPowder
	script_special_handler 0x1D0, PrintPlayerBerryPowderAmount
	script_special_handler 0x1D1, sub_0813A828
	script_special_handler 0x1D2, sub_0813A85C
	script_special_handler 0x1D3, sub_0813B810
	script_special_handler 0x1D4, sub_081C6A64
	script_special_handler 0x1D5, convert_pixel_width_to_tile_width
	script_special_handler 0x1D6, CountPlayerTrainerStars
	script_special_handler 0x1D7, sub_0813ACC8
	script_special_handler 0x1D8, sub_0813ADF0
	script_special_handler 0x1D9, sub_0813AE0C
	script_special_handler 0x1DA, sub_081B85CC
	script_special_handler 0x1DB, sub_0813AEEC
	script_special_handler 0x1DC, sub_0813AF80
	script_special_handler 0x1DD, DoDeoxysRockInteraction
	script_special_handler 0x1DE, sub_0813B208
	script_special_handler 0x1DF, CreateObedientEnemyMon
	script_special_handler 0x1E0, StartMirageTowerDisintegration
	script_special_handler 0x1E1, StartMirageTowerFossilFallAndSink
	script_special_handler 0x1E2, StartMirageTowerShake
	script_special_handler 0x1E3, ChangeBoxPokemonNickname
	script_special_handler 0x1E4, get_unknown_box_id
	script_special_handler 0x1E5, sub_0813B254
	script_special_handler 0x1E6, SetMatchCallRegisteredFlag
	script_special_handler 0x1E7, sub_08175184
	script_special_handler 0x1E8, CreateUnusualWeatherEvent
	script_special_handler 0x1E9, GetUnusualWeatherMapNameAndType
	script_special_handler 0x1EA, sub_0813B4C8
	script_special_handler 0x1EB, sub_080A0194
	script_special_handler 0x1EC, Unused_SetWeatherSunny
	script_special_handler 0x1ED, sub_081AFA78
	script_special_handler 0x1EE, sub_0813B518
	script_special_handler 0x1EF, ShouldDoBrailleRegicePuzzle
	script_special_handler 0x1F0, EnableNationalPokedex
	script_special_handler 0x1F1, display_text_and_get_width_internal
	script_special_handler 0x1F2, sub_080E1D6C
	script_special_handler 0x1F3, TurnOnTVScreen
	script_special_handler 0x1F4, sub_081D4110
	script_special_handler 0x1F5, sub_0813B54C
	script_special_handler 0x1F6, sub_0813B5A0
	script_special_handler 0x1F7, sub_0813B56C
	script_special_handler 0x1F8, CallTrainerHillFunction
	script_special_handler 0x1F9, sub_0813B810
	script_special_handler 0x1FA, sub_0813B844
	script_special_handler 0x1FB, sub_081D426C
	script_special_handler 0x1FC, sub_08022230
	script_special_handler 0x1FD, TryBufferWaldaPhrase
	script_special_handler 0x1FE, DoWaldaNamingScreen
	script_special_handler 0x1FF, TryGetWallpaperWithWaldaPhrase
	script_special_handler 0x200, sub_08139F0C
	script_special_handler 0x201, sub_0813B9A0
	script_special_handler 0x202, sub_080F9424
	script_special_handler 0x203, ShowTrainerHillRecords
	script_special_handler 0x204, sub_080B3F60
	script_special_handler 0x205, sub_0813B9D8
	script_special_handler 0x206, sub_081B95B8
	script_special_handler 0x207, sub_08071CF0
	script_special_handler 0x208, TryPrepareSecondApproachingTrainer
	script_special_handler 0x209, RemoveRecordsWindow
	script_special_handler 0x20A, sub_08139C4C
	script_special_handler 0x20B, sub_080B331C
	.if (. - gSpecials) != 0x830
	.error "gSpecials size changed"
	.endif
gStdScripts: @ 0x081DB7BC
	.4byte Std_ObtainItem
	.4byte Std_FindItem
	.4byte Std_MsgboxNPC
	.4byte Std_MsgboxSign
	.4byte Std_MsgboxDefault
	.4byte Std_MsgboxYesNo
	.4byte Std_MsgboxAutoclose
	.4byte Std_ObtainDecoration
	.4byte Std_RegisteredInMatchCall
	.4byte Std_MsgboxGetPoints
	.4byte Std_MsgboxPokenav
gStdScripts_End:
	.include "data/generated/maps/PetalburgCity.inc"
	@ ANALYSIS: SOURCE_RANGE offset=0x1DBFD3, size=0x9EB
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_SlateportCity_OnTransition_OnFrame: @ 0x081DBFD3
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081DBFDE
	.byte 0x02
	.4byte gMapScriptConditionTable_SlateportCity_OnFrame
	.byte 0
EventScript_JP_081DBFDE: @ 0x081DBFDE
	setvar 0x40AA, 0x0000
	call EventScript_JP_081DBFFF
	compare_var_to_value 0x4058, 0x0001
	call_if 0x01, EventScript_JP_081DC00B
	compare_var_to_value 0x40D2, 0x0001
	call_if 0x01, EventScript_JP_081DC059
	end
EventScript_JP_081DBFFF: @ 0x081DBFFF
	setflag 0x0877
	setvar 0x4086, 0x0000
	setflag 0x0323
	return
EventScript_JP_081DC00B: @ 0x081DC00B
	setobjectxyperm 0x000B, 0x001C, 0x000D
	setobjectxyperm 0x0007, 0x0019, 0x000D
	setobjectxyperm 0x0003, 0x0019, 0x000E
	setobjectxyperm 0x0006, 0x001B, 0x0010
	setobjectxyperm 0x0008, 0x001C, 0x0010
	setobjectxyperm 0x0001, 0x001D, 0x0010
	setobjectxyperm 0x0002, 0x001F, 0x000E
	setobjectmovementtype 0x000B, 0x08
	setobjectmovementtype 0x0007, 0x12
	setobjectmovementtype 0x0003, 0x10
	setobjectmovementtype 0x0006, 0x07
	setobjectmovementtype 0x0008, 0x07
	setobjectmovementtype 0x0001, 0x07
	setobjectmovementtype 0x0002, 0x09
	return
EventScript_JP_081DC059: @ 0x081DC059
	setflag 0x4000
	getplayerxy 0x8004, 0x8005
	compare_var_to_value 0x8004, 0x001E
	goto_if 0x01, EventScript_JP_081DC078
	setobjectxyperm 0x0023, 0x0017, 0x001B
	setobjectmovementtype 0x0023, 0x0A
	return
EventScript_JP_081DC078: @ 0x081DC078
	setobjectxyperm 0x0023, 0x0016, 0x001B
	setobjectmovementtype 0x0023, 0x0A
	return
gMapScriptConditionTable_SlateportCity_OnFrame: @ 0x081DC084
	@ conditional map script table
	.2byte 0x40D2, 0x0001
	.4byte EventScript_JP_081DC08E
	.2byte 0
EventScript_JP_081DC08E: @ 0x081DC08E
	lockall
	@ event command: addobject
	addobject 0x0023
	@ event command: applymovement
	applymovement 0x00FF, SlateportCity_Movement_Delay16_Delay8_WalkInPlaceFastestLeft_1
	@ event command: applymovement
	applymovement 0x0023, SlateportCity_Movement_WalkRightX7
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1DD7F5
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0023, PetalburgCity_Ext_WalkInPlaceFasterLeft
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x003C
	loadword 0x00, gText_Rom_1DD864
	callstd 0x04
	@ event command: applymovement
	applymovement 0x0023, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1DD882
	callstd 0x04
	closemessage
	delay 0x001E
	playfanfare 0x01CC
	loadword 0x00, gText_Rom_1DD8C6
	callstd 0x04
	waitfanfare
	closemessage
	delay 0x001E
	setflag 0x00D7
	loadword 0x00, gText_Rom_1DD8E2
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0023, SlateportCity_Movement_WalkLeftX8_1
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: removeobject
	removeobject 0x0023
	setobjectxyperm 0x0023, 0x000A, 0x000C
	setobjectmovementtype 0x0023, 0x08
	clearflag 0x4000
	setvar 0x40D2, 0x0002
	addvar 0x40D1, 0x0001
	releaseall
	end
SlateportCity_Movement_Delay16_Delay8_WalkInPlaceFastestLeft_1: @ 0x081DC11A
	@ object movement sequence
	delay_16
	delay_8
	walk_in_place_fastest_left
	step_end
SlateportCity_Movement_WalkRightX7: @ 0x081DC11E
	@ object movement sequence
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
SlateportCity_Movement_WalkLeftX8_1: @ 0x081DC126
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
.globl EventScript_JP_081DC12F
EventScript_JP_081DC12F: @ 0x081DC12F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	message gText_Rom_1DC9BE
	waitmessage
	pokemart MartItems_JP_081DC148
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00 @ padding before MartItems_JP_081DC148
MartItems_JP_081DC148: @ 0x081DC148
	.byte 0x40, 0x00, 0x41, 0x00, 0x42, 0x00, 0x46, 0x00, 0x43, 0x00, 0x3F, 0x00, 0x00, 0x00
	.byte 0x6C, 0x02
.globl EventScript_JP_081DC158
EventScript_JP_081DC158: @ 0x081DC158
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	bufferleadmonspeciesname 0x00
	loadword 0x00, gText_Rom_1DC9DA
	callstd 0x04
	specialvar_ 0x800D, 0x0123
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_081DC1AC
	specialvar_ 0x800D, 0x0125
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_081DC1A2
	loadword 0x00, gText_Rom_1DC9E7
	callstd 0x04
	playfanfare 0x0172
	message gText_Rom_1DCA12
	waitfanfare
	loadword 0x00, gText_Rom_1DCA24
	callstd 0x04
	@ event command: special
	special GiveLeadMonEffortRibbon
	release
	end
EventScript_JP_081DC1A2: @ 0x081DC1A2
	loadword 0x00, gText_Rom_1DCA3D
	callstd 0x04
	release
	end
EventScript_JP_081DC1AC: @ 0x081DC1AC
	loadword 0x00, gText_Rom_1DCA67
	callstd 0x04
	release
	end
.globl EventScript_JP_081DC1B6
EventScript_JP_081DC1B6: @ 0x081DC1B6
	lock
	faceplayer
	compare_var_to_value 0x4058, 0x0001
	call_if 0x01, EventScript_JP_081DC1CD
	loadword 0x00, gText_Rom_1DCABE
	callstd 0x04
	release
	end
EventScript_JP_081DC1CD: @ 0x081DC1CD
	loadword 0x00, gText_Rom_1DD13B
	callstd 0x04
	release
	end
.globl EventScript_JP_081DC1D7
EventScript_JP_081DC1D7: @ 0x081DC1D7
	lock
	faceplayer
	compare_var_to_value 0x4058, 0x0001
	call_if 0x01, EventScript_JP_081DC1EE
	loadword 0x00, gText_Rom_1DCAF7
	callstd 0x04
	release
	end
EventScript_JP_081DC1EE: @ 0x081DC1EE
	loadword 0x00, gText_Rom_1DD082
	callstd 0x04
	release
	end
.globl EventScript_JP_081DC1F8
EventScript_JP_081DC1F8: @ 0x081DC1F8
	lock
	faceplayer
	compare_var_to_value 0x4058, 0x0001
	call_if 0x01, EventScript_JP_081DC218
	checkflag 0x0060
	goto_if 0x01, EventScript_JP_081DC222
	loadword 0x00, gText_Rom_1DCB43
	callstd 0x04
	release
	end
EventScript_JP_081DC218: @ 0x081DC218
	loadword 0x00, gText_Rom_1DD0C6
	callstd 0x04
	release
	end
EventScript_JP_081DC222: @ 0x081DC222
	loadword 0x00, gText_Rom_1DCB73
	callstd 0x04
	release
	end
.globl EventScript_JP_081DC22C
EventScript_JP_081DC22C: @ 0x081DC22C
	lock
	faceplayer
	compare_var_to_value 0x4058, 0x0001
	call_if 0x01, EventScript_JP_081DC243
	loadword 0x00, gText_Rom_1DCBCA
	callstd 0x04
	release
	end
EventScript_JP_081DC243: @ 0x081DC243
	loadword 0x00, gText_Rom_1DD106
	callstd 0x04
	release
	end
.globl EventScript_JP_081DC24D
EventScript_JP_081DC24D: @ 0x081DC24D
	compare_var_to_value 0x4058, 0x0001
	goto_if 0x01, EventScript_JP_081DC261
	loadword 0x00, gText_Rom_1DCC04
	callstd 0x02
	end
EventScript_JP_081DC261: @ 0x081DC261
	loadword 0x00, gText_Rom_1DD166
	callstd 0x03
	end
.globl EventScript_JP_081DC26A
EventScript_JP_081DC26A: @ 0x081DC26A
	lock
	faceplayer
	compare_var_to_value 0x4058, 0x0001
	call_if 0x01, EventScript_JP_081DC281
	loadword 0x00, gText_Rom_1DCC5B
	callstd 0x04
	release
	end
EventScript_JP_081DC281: @ 0x081DC281
	loadword 0x00, gText_Rom_1DD185
	callstd 0x04
	release
	end
.globl EventScript_JP_081DC28B
EventScript_JP_081DC28B: @ 0x081DC28B
	lock
	faceplayer
	checkflag 0x0094
	goto_if 0x01, EventScript_JP_081DC2A0
	loadword 0x00, gText_Rom_1DCCE4
	callstd 0x04
	release
	end
EventScript_JP_081DC2A0: @ 0x081DC2A0
	loadword 0x00, gText_Rom_1DCCF6
	callstd 0x04
	release
	end
.globl EventScript_JP_081DC2AA
EventScript_JP_081DC2AA: @ 0x081DC2AA
	loadword 0x00, gText_Rom_1DD3F8
	callstd 0x03
	end
.globl EventScript_JP_081DC2B3
EventScript_JP_081DC2B3: @ 0x081DC2B3
	lockall
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_081DC2DA
	checkflag 0x086D
	goto_if 0x01, EventScript_JP_081DC2D0
	loadword 0x00, gText_Rom_1DD41C
	callstd 0x04
	releaseall
	end
EventScript_JP_081DC2D0: @ 0x081DC2D0
	loadword 0x00, gText_Rom_1DD44A
	callstd 0x04
	releaseall
	end
EventScript_JP_081DC2DA: @ 0x081DC2DA
	loadword 0x00, gText_Rom_1DD487
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_081DC2E4
EventScript_JP_081DC2E4: @ 0x081DC2E4
	loadword 0x00, gText_Rom_1DD4CC
	callstd 0x03
	end
.globl EventScript_JP_081DC2ED
EventScript_JP_081DC2ED: @ 0x081DC2ED
	loadword 0x00, gText_Rom_1DD4F1
	callstd 0x03
	end
.globl EventScript_JP_081DC2F6
EventScript_JP_081DC2F6: @ 0x081DC2F6
	loadword 0x00, gText_Rom_1DD51D
	callstd 0x03
	end
.globl EventScript_JP_081DC2FF
EventScript_JP_081DC2FF: @ 0x081DC2FF
	loadword 0x00, gText_Rom_1DD53C
	callstd 0x03
	end
.globl EventScript_JP_081DC308
EventScript_JP_081DC308: @ 0x081DC308
	lockall
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_081DC31C
	loadword 0x00, gText_Rom_1DD55A
	callstd 0x04
	releaseall
	end
EventScript_JP_081DC31C: @ 0x081DC31C
	loadword 0x00, gText_Rom_1DD5A1
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_081DC326
EventScript_JP_081DC326: @ 0x081DC326
	loadword 0x00, gText_Rom_1DD5D6
	callstd 0x03
	end
.globl EventScript_JP_081DC32F
EventScript_JP_081DC32F: @ 0x081DC32F
	lock
	faceplayer
	compare_var_to_value 0x4058, 0x0001
	call_if 0x01, EventScript_JP_081DC346
	loadword 0x00, gText_Rom_1DCFCB
	callstd 0x04
	release
	end
EventScript_JP_081DC346: @ 0x081DC346
	loadword 0x00, gText_Rom_1DCFCB
	callstd 0x04
	release
	end
.globl EventScript_JP_081DC350
EventScript_JP_081DC350: @ 0x081DC350
	loadword 0x00, gText_Rom_1DCFF4
	callstd 0x02
	end
.globl EventScript_JP_081DC359
EventScript_JP_081DC359: @ 0x081DC359
	loadword 0x00, gText_Rom_1DCF33
	callstd 0x02
	end
.globl EventScript_JP_081DC362
EventScript_JP_081DC362: @ 0x081DC362
	loadword 0x00, gText_Rom_1DCF68
	callstd 0x02
	end
.globl EventScript_JP_081DC36B
EventScript_JP_081DC36B: @ 0x081DC36B
	loadword 0x00, gText_Rom_1DCFAA
	callstd 0x02
	end
.globl EventScript_JP_081DC374
EventScript_JP_081DC374: @ 0x081DC374
	loadword 0x00, gText_Rom_1DD037
	callstd 0x02
	end
.globl EventScript_JP_081DC37D
EventScript_JP_081DC37D: @ 0x081DC37D
	lock
	faceplayer
	loadword 0x00, gText_Rom_1DCD3C
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0005, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_081DC394
EventScript_JP_081DC394: @ 0x081DC394
	lock
	faceplayer
	loadword 0x00, gText_Rom_1DCD5B
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0012, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_081DC3AB
EventScript_JP_081DC3AB: @ 0x081DC3AB
	lock
	faceplayer
	loadword 0x00, gText_Rom_1DCD8E
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0013, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_081DC3C2
EventScript_JP_081DC3C2: @ 0x081DC3C2
	lock
	faceplayer
	loadword 0x00, gText_Rom_1DCDBF
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x001A, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_081DC3D9
EventScript_JP_081DC3D9: @ 0x081DC3D9
	lock
	faceplayer
	loadword 0x00, gText_Rom_1DCDF2
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x001B, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_081DC3F0
EventScript_JP_081DC3F0: @ 0x081DC3F0
	lock
	faceplayer
	loadword 0x00, gText_Rom_1DCE19
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x001C, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_081DC407
EventScript_JP_081DC407: @ 0x081DC407
	lock
	faceplayer
	loadword 0x00, gText_Rom_1DCE2D
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x001D, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_081DC41E
EventScript_JP_081DC41E: @ 0x081DC41E
	lock
	faceplayer
	loadword 0x00, gText_Rom_1DCE55
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x001E, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_081DC435
EventScript_JP_081DC435: @ 0x081DC435
	lock
	faceplayer
	playse 0x0015
	@ event command: applymovement
	applymovement 0x001F, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x001F, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1DCE75
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x001F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x001F, SlateportCity_Movement_Delay16X2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x001F, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1DCE7F
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x001F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x001F, SlateportCity_Movement_Delay16X2
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1DCEA7
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x001F, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x001F, SlateportCity_Movement_Delay16X2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x001F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
SlateportCity_Movement_Delay16X2: @ 0x081DC4BB
	@ object movement sequence
	delay_16
	delay_16
	step_end
.globl EventScript_JP_081DC4BE
EventScript_JP_081DC4BE: @ 0x081DC4BE
	loadword 0x00, gText_Rom_1DCECA
	callstd 0x03
	end
.globl EventScript_JP_081DC4C7
EventScript_JP_081DC4C7: @ 0x081DC4C7
	lock
	faceplayer
	loadword 0x00, gText_Rom_1DCEF9
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0021, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_081DC4DE
EventScript_JP_081DC4DE: @ 0x081DC4DE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemartdecoration DecorationMartItems_JP_081DC4F8
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x00 @ padding before DecorationMartItems_JP_081DC4F8
DecorationMartItems_JP_081DC4F8: @ 0x081DC4F8
	@ ANALYSIS: SEMANTIC_NUMERIC_DECORATION_MART_ITEMS
	@ Decoration Mart item-ID list.
	.byte 0x5F, 0x00, 0x4E, 0x00, 0x60, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_081DC502: @ 0x081DC502
	loadword 0x00, gText_Rom_243B96
	callstd 0x04
	release
	end
.globl EventScript_JP_081DC50C
EventScript_JP_081DC50C: @ 0x081DC50C
	lock
	faceplayer
	checkflag 0x0060
	goto_if 0x00, EventScript_JP_081DC502
	message gText_Rom_24390F
	waitmessage
	pokemartdecoration DecorationMartItems_JP_081DC52C
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
DecorationMartItems_JP_081DC52C: @ 0x081DC52C
	.byte 0x19, 0x00, 0x1B, 0x00, 0x1A, 0x00, 0x1C, 0x00, 0x1D, 0x00, 0x1E, 0x00, 0x33, 0x00, 0x34, 0x00
	.byte 0x35, 0x00, 0x36, 0x00, 0x37, 0x00, 0x38, 0x00, 0x39, 0x00, 0x3A, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_081DC54C
EventScript_JP_081DC54C: @ 0x081DC54C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemart MartItems_JP_081DC564
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00 @ padding before MartItems_JP_081DC564
MartItems_JP_081DC564: @ 0x081DC564
	.byte 0x2A, 0x01, 0x4B, 0x01, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_081DC56C
EventScript_JP_081DC56C: @ 0x081DC56C
	lockall
	loadword 0x00, gText_Rom_1DD1E8
	callstd 0x04
	loadword 0x00, gText_Rom_1DD20D
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x000A, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x000A
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x0019
	@ event command: applymovement
	applymovement 0x000B, SlateportCity_Movement_Delay16X5_WalkDown_WalkLeft
	@ event command: applymovement
	applymovement 0x00FF, SlateportCity_Movement_Delay16X7_WalkInPlaceFastestDown
	@ event command: applymovement
	applymovement 0x000A, SlateportCity_Movement_Delay16_WalkLeftX2_WalkDown_WalkLeftX8
	@ event command: applymovement
	applymovement 0x0009, SlateportCity_Movement_WalkDown_WalkLeftX3_WalkDown_WalkLeftX8
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: removeobject
	removeobject 0x000A
	@ event command: removeobject
	removeobject 0x0009
	loadword 0x00, gText_Rom_1DD26B
	callstd 0x04
	@ event command: applymovement
	applymovement 0x000B, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1DD29D
	callstd 0x04
	playbgm 0x01A3, 0x00
	loadword 0x00, gText_Rom_1DD316
	callstd 0x04
	@ event command: applymovement
	applymovement 0x0006, PetalburgCity_Ext_WalkInPlaceFasterLeft
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterLeft
	@ event command: applymovement
	applymovement 0x0007, SlateportCity_Movement_Delay16X2_EmoteQuestionMark_WalkInPlaceFastestRight_Delay16X2_WalkInPlaceFastestLeft
	@ event command: applymovement
	applymovement 0x0003, PetalburgCity_Ext_QuestionMark
	@ event command: applymovement
	applymovement 0x0002, SlateportCity_Movement_EmoteQuestionMark_WalkInPlaceFastestUp_Delay16_WalkInPlaceFastestDown_Delay16X2_WalkInPlaceFastestLeft
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000B, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1DD395
	callstd 0x04
	playse 0x0015
	@ event command: applymovement
	applymovement 0x000B, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000B, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000B, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1DD3C8
	callstd 0x04
	loadword 0x00, gText_Rom_1DD3E6
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x000B, SlateportCity_Movement_WalkRight_WalkUpX2_SetInvisible
	@ event command: applymovement
	applymovement 0x00FF, SlateportCity_Movement_WalkInPlaceFastestRight_Delay16X2_WalkRight_WalkUp
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: removeobject
	removeobject 0x000B
	clearflag 0x0349
	clearflag 0x0350
	clearflag 0x034D
	clearflag 0x034E
	setvar 0x4058, 0x0002
	@ event command: warp
	warp MAP_ID_SLATEPORT_CITY_HARBOR, 0xFF, 0x000B, 0x000E
	.byte 0x27, 0x6B, 0x02
SlateportCity_Movement_Delay16X2_EmoteQuestionMark_WalkInPlaceFastestRight_Delay16X2_WalkInPlaceFastestLeft: @ 0x081DC67D
	@ object movement sequence
	delay_16
	delay_16
	emote_question_mark
	walk_in_place_fastest_right
	delay_16
	delay_16
	walk_in_place_fastest_left
	step_end
SlateportCity_Movement_EmoteQuestionMark_WalkInPlaceFastestUp_Delay16_WalkInPlaceFastestDown_Delay16X2_WalkInPlaceFastestLeft: @ 0x081DC685
	@ object movement sequence
	emote_question_mark
	walk_in_place_fastest_up
	delay_16
	walk_in_place_fastest_down
	delay_16
	delay_16
	walk_in_place_fastest_left
	step_end
SlateportCity_Movement_Delay16_WalkLeftX2_WalkDown_WalkLeftX8: @ 0x081DC68D
	@ object movement sequence
	delay_16
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
SlateportCity_Movement_WalkDown_WalkLeftX3_WalkDown_WalkLeftX8: @ 0x081DC69A
	@ ANALYSIS: SEMANTIC_NUMERIC_MOVEMENT
	@ Object-movement command bytecode/sequence; numeric bytes are movement commands and terminators.
	@ object movement sequence
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
	.globl SlateportCity_Movement_WalkDown_WalkInPlaceFastestUp
SlateportCity_Movement_WalkDown_WalkInPlaceFastestUp: @ 0x081DC6A8
	.byte 0x08, 0x26, 0xFE
SlateportCity_Movement_WalkRight_WalkUpX2_SetInvisible: @ 0x081DC6AB
	@ object movement sequence
	walk_right
	walk_up
	walk_up
	set_invisible
	step_end
SlateportCity_Movement_Delay16X5_WalkDown_WalkLeft: @ 0x081DC6B0
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_down
	walk_left
	step_end
SlateportCity_Movement_WalkInPlaceFastestRight_Delay16X2_WalkRight_WalkUp: @ 0x081DC6B8
	@ object movement sequence
	walk_in_place_fastest_right
	delay_16
	delay_16
	walk_right
	walk_up
	step_end
SlateportCity_Movement_Delay16X7_WalkInPlaceFastestDown: @ 0x081DC6BE
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_fastest_down
	step_end
.globl EventScript_JP_081DC6C7
EventScript_JP_081DC6C7: @ 0x081DC6C7
	loadword 0x00, gText_Rom_1DD1AB
	callstd 0x03
	end
.globl EventScript_JP_081DC6D0
EventScript_JP_081DC6D0: @ 0x081DC6D0
	loadword 0x00, gText_Rom_1DD1C1
	callstd 0x03
	end
.globl EventScript_JP_081DC6D9
EventScript_JP_081DC6D9: @ 0x081DC6D9
	loadword 0x00, gText_Rom_1DCA81
	callstd 0x02
	end
.globl EventScript_JP_081DC6E2
EventScript_JP_081DC6E2: @ 0x081DC6E2
	lock
	faceplayer
	checkflag 0x0151
	goto_if 0x01, EventScript_JP_081DC70E
	loadword 0x00, gText_Rom_1DD5F9
	callstd 0x04
	setorcopyvar 0x8000, 0x0174
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	setflag 0x0151
	loadword 0x00, gText_Rom_1DD69F
	callstd 0x04
	release
	end
EventScript_JP_081DC70E: @ 0x081DC70E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	specialvar_ 0x800D, 0x01CE
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081DC734
	loadword 0x00, gText_Rom_1DD723
	callstd 0x04
	@ event command: special
	special DisplayBerryPowderVendorMenu
	goto EventScript_JP_081DC73E
	.byte 0x02
EventScript_JP_081DC734: @ 0x081DC734
	loadword 0x00, gText_Rom_1DD69F
	callstd 0x04
	release
	end
EventScript_JP_081DC73E: @ 0x081DC73E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_1DD734
	waitmessage
	setvar 0x8004, 0x0007
	@ event command: special
	special ShowScrollableMultichoice
	waitstate
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081DC7E2
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081DC7F6
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081DC80A
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_081DC81E
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_081DC832
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_081DC846
	compare_var_to_value 0x8000, 0x0006
	goto_if 0x01, EventScript_JP_081DC85A
	compare_var_to_value 0x8000, 0x0007
	goto_if 0x01, EventScript_JP_081DC86E
	compare_var_to_value 0x8000, 0x0008
	goto_if 0x01, EventScript_JP_081DC882
	compare_var_to_value 0x8000, 0x0009
	goto_if 0x01, EventScript_JP_081DC896
	compare_var_to_value 0x8000, 0x000A
	goto_if 0x01, EventScript_JP_081DC8AA
	compare_var_to_value 0x8000, 0x000B
	goto_if 0x01, EventScript_JP_081DC8BE
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081DC8BE
	end
EventScript_JP_081DC7E2: @ 0x081DC7E2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	bufferitemname 0x00, 0x001E
	setvar 0x8008, 0x001E
	setvar 0x8009, 0x0032
	goto EventScript_JP_081DC8CB
	.byte 0x02
EventScript_JP_081DC7F6: @ 0x081DC7F6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	bufferitemname 0x00, 0x001F
	setvar 0x8008, 0x001F
	setvar 0x8009, 0x0050
	goto EventScript_JP_081DC8CB
	.byte 0x02
EventScript_JP_081DC80A: @ 0x081DC80A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	bufferitemname 0x00, 0x0020
	setvar 0x8008, 0x0020
	setvar 0x8009, 0x0032
	goto EventScript_JP_081DC8CB
	.byte 0x02
EventScript_JP_081DC81E: @ 0x081DC81E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	bufferitemname 0x00, 0x0021
	setvar 0x8008, 0x0021
	setvar 0x8009, 0x012C
	goto EventScript_JP_081DC8CB
	.byte 0x02
EventScript_JP_081DC832: @ 0x081DC832
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	bufferitemname 0x00, 0x0040
	setvar 0x8008, 0x0040
	setvar 0x8009, 0x03E8
	goto EventScript_JP_081DC8CB
	.byte 0x02
EventScript_JP_081DC846: @ 0x081DC846
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	bufferitemname 0x00, 0x0041
	setvar 0x8008, 0x0041
	setvar 0x8009, 0x03E8
	goto EventScript_JP_081DC8CB
	.byte 0x02
EventScript_JP_081DC85A: @ 0x081DC85A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	bufferitemname 0x00, 0x0042
	setvar 0x8008, 0x0042
	setvar 0x8009, 0x03E8
	goto EventScript_JP_081DC8CB
	.byte 0x02
EventScript_JP_081DC86E: @ 0x081DC86E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	bufferitemname 0x00, 0x0043
	setvar 0x8008, 0x0043
	setvar 0x8009, 0x03E8
	goto EventScript_JP_081DC8CB
	.byte 0x02
EventScript_JP_081DC882: @ 0x081DC882
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	bufferitemname 0x00, 0x0046
	setvar 0x8008, 0x0046
	setvar 0x8009, 0x03E8
	goto EventScript_JP_081DC8CB
	.byte 0x02
EventScript_JP_081DC896: @ 0x081DC896
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	bufferitemname 0x00, 0x003F
	setvar 0x8008, 0x003F
	setvar 0x8009, 0x03E8
	goto EventScript_JP_081DC8CB
	.byte 0x02
EventScript_JP_081DC8AA: @ 0x081DC8AA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	bufferitemname 0x00, 0x0045
	setvar 0x8008, 0x0045
	setvar 0x8009, 0x0BB8
	goto EventScript_JP_081DC8CB
	.byte 0x02
EventScript_JP_081DC8BE: @ 0x081DC8BE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_1DD7BB
	callstd 0x04
	@ event command: special
	special RemoveBerryPowderVendorMenu
	release
	end
EventScript_JP_081DC8CB: @ 0x081DC8CB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_1DD743
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081DC73E
	copyvar 0x8004, 0x8009
	specialvar_ 0x800D, 0x01CE
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081DC942
	setorcopyvar 0x8000, 0x8008
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081DC935
	copyvar 0x8004, 0x8009
	@ event command: special
	special TakeBerryPowder
	@ event command: special
	special PrintPlayerBerryPowderAmount
	loadword 0x00, gText_Rom_1DD769
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081DC73E
	loadword 0x00, gText_Rom_1DD7A5
	callstd 0x04
	@ event command: special
	special RemoveBerryPowderVendorMenu
	release
	end
EventScript_JP_081DC935: @ 0x081DC935
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_TheBagIsFull
	callstd 0x04
	@ event command: special
	special RemoveBerryPowderVendorMenu
	release
	end
EventScript_JP_081DC942: @ 0x081DC942
	loadword 0x00, gText_Rom_1DD753
	callstd 0x04
	goto EventScript_JP_081DC73E
	.byte 0x02
.globl EventScript_JP_081DC950
EventScript_JP_081DC950: @ 0x081DC950
	lockall
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_FaceUp
	@ event command: waitmovement
	waitmovement 0x0000
	opendoor 0x000A, 0x000C
	waitdooranim
	@ event command: addobject
	addobject 0x0023
	@ event command: applymovement
	applymovement 0x00FF, SlateportCity_Movement_LockFacingDirection_WalkDown_UnlockFacingDirection
	@ event command: applymovement
	applymovement 0x0023, SlateportCity_Movement_Delay8_WalkDown
	@ event command: waitmovement
	waitmovement 0x0000
	closedoor 0x000A, 0x000C
	waitdooranim
	loadword 0x00, gText_Rom_1DD93E
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x00FF, SlateportCity_Movement_Delay16_WalkInPlaceFastestRight
	@ event command: applymovement
	applymovement 0x0023, SlateportCity_Movement_WalkRightX8
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: removeobject
	removeobject 0x0023
	addvar 0x40D1, 0x0001
	setvar 0x40D2, 0x0003
	releaseall
	end
SlateportCity_Movement_LockFacingDirection_WalkDown_UnlockFacingDirection: @ 0x081DC9A4
	@ object movement sequence
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end
SlateportCity_Movement_Delay16_WalkInPlaceFastestRight: @ 0x081DC9A8
	@ object movement sequence
	delay_16
	walk_in_place_fastest_right
	step_end
SlateportCity_Movement_Delay8_WalkDown: @ 0x081DC9AB
	@ object movement sequence
	delay_8
	walk_down
	step_end
SlateportCity_Movement_WalkRightX8: @ 0x081DC9AE
	@ object movement sequence
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
.globl EventScript_JP_081DC9B7
EventScript_JP_081DC9B7: @ 0x081DC9B7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: special
	special ShowBerryCrushRankings
	waitstate
	releaseall
	end
