
	.globl gUnknown_81DABAC
gUnknown_81DABAC: @ 0x081DABAC
	.4byte ScrCmd_nop
	.4byte ScrCmd_nop1
	.4byte ScrCmd_end
	.4byte ScrCmd_return
	.4byte ScrCmd_call
	.4byte ScrCmd_goto
	.4byte ScrCmd_goto_if
	.4byte ScrCmd_call_if
	.4byte ScrCmd_gotostd
	.4byte ScrCmd_callstd
	.4byte ScrCmd_gotostd_if
	.4byte ScrCmd_callstd_if
	.4byte ScrCmd_returnram
	.4byte ScrCmd_killscript
	.4byte ScrCmd_setmysteryeventstatus
	.4byte ScrCmd_loadword
	.4byte ScrCmd_loadbyte
	.4byte ScrCmd_writebytetoaddr
	.4byte ScrCmd_loadbytefromaddr
	.4byte ScrCmd_setptrbyte
	.4byte ScrCmd_copylocal
	.4byte ScrCmd_copybyte
	.4byte ScrCmd_setvar
	.4byte ScrCmd_addvar
	.4byte ScrCmd_subvar
	.4byte ScrCmd_copyvar
	.4byte ScrCmd_setorcopyvar
	.4byte ScrCmd_compare_local_to_local
	.4byte ScrCmd_compare_local_to_value
	.4byte ScrCmd_compare_local_to_addr
	.4byte ScrCmd_compare_addr_to_local
	.4byte ScrCmd_compare_addr_to_value
	.4byte ScrCmd_compare_addr_to_addr
	.4byte ScrCmd_compare_var_to_value
	.4byte ScrCmd_compare_var_to_var
	.4byte ScrCmd_callnative
	.4byte ScrCmd_gotonative
	.4byte ScrCmd_special
	.4byte ScrCmd_specialvar
	.4byte ScrCmd_waitstate
	.4byte ScrCmd_delay
	.4byte ScrCmd_setflag
	.4byte ScrCmd_clearflag
	.4byte ScrCmd_checkflag
	.4byte ScrCmd_initclock
	.4byte ScrCmd_dotimebasedevents
	.4byte ScrCmd_gettime
	.4byte ScrCmd_playse
	.4byte ScrCmd_waitse
	.4byte ScrCmd_playfanfare
	.4byte ScrCmd_waitfanfare
	.4byte ScrCmd_playbgm
	.4byte ScrCmd_savebgm
	.4byte ScrCmd_fadedefaultbgm
	.4byte ScrCmd_fadenewbgm
	.4byte ScrCmd_fadeoutbgm
	.4byte ScrCmd_fadeinbgm
	.4byte ScrCmd_warp
	.4byte ScrCmd_warpsilent
	.4byte ScrCmd_warpdoor
	.4byte ScrCmd_warphole
	.4byte ScrCmd_warpteleport
	.4byte ScrCmd_setwarp
	.4byte ScrCmd_setdynamicwarp
	.4byte ScrCmd_setdivewarp
	.4byte ScrCmd_setholewarp
	.4byte ScrCmd_getplayerxy
	.4byte ScrCmd_getpartysize
	.4byte ScrCmd_giveitem
	.4byte ScrCmd_takeitem
	.4byte ScrCmd_checkitemspace
	.4byte ScrCmd_checkitem
	.4byte ScrCmd_checkitemtype
	.4byte ScrCmd_givepcitem
	.4byte ScrCmd_checkpcitem
	.4byte ScrCmd_givedecoration
	.4byte ScrCmd_takedecoration
	.4byte ScrCmd_checkdecor
	.4byte ScrCmd_checkdecorspace
	.4byte ScrCmd_applymovement
	.4byte ScrCmd_applymovement_at
	.4byte ScrCmd_waitmovement
	.4byte ScrCmd_waitmovement_at
	.4byte ScrCmd_removeobject
	.4byte ScrCmd_removeobject_at
	.4byte ScrCmd_addobject
	.4byte ScrCmd_addobject_at
	.4byte ScrCmd_setobjectxy
	.4byte ScrCmd_showobject_at
	.4byte ScrCmd_hideobject_at
	.4byte ScrCmd_faceplayer
	.4byte ScrCmd_turnobject
	.4byte ScrCmd_trainerbattle
	.4byte ScrCmd_dotrainerbattle
	.4byte ScrCmd_gotobeatenscript
	.4byte ScrCmd_gotopostbattlescript
	.4byte ScrCmd_checktrainerflag
	.4byte ScrCmd_settrainerflag
	.4byte ScrCmd_cleartrainerflag
	.4byte ScrCmd_setobjectxyperm
	.4byte ScrCmd_moveobjectoffscreen
	.4byte ScrCmd_setobjectmovementtype
	.4byte ScrCmd_waitmessage
	.4byte ScrCmd_message
	.4byte ScrCmd_closemessage
	.4byte ScrCmd_lockall
	.4byte ScrCmd_lock
	.4byte ScrCmd_releaseall
	.4byte ScrCmd_release
	.4byte ScrCmd_waitbuttonpress
	.4byte ScrCmd_yesnobox
	.4byte ScrCmd_multichoice
	.4byte ScrCmd_multichoicedefault
	.4byte ScrCmd_multichoicegrid
	.4byte ScrCmd_erasebox
	.4byte ScrCmd_drawboxtext
	.4byte ScrCmd_mossdeepgym2
	.4byte ScrCmd_showmonpic
	.4byte ScrCmd_hidemonpic
	.4byte ScrCmd_showcontestwinner
	.4byte ScrCmd_braillemessage
	.4byte ScrCmd_givemon
	.4byte ScrCmd_giveegg
	.4byte ScrCmd_setmonmove
	.4byte ScrCmd_checkpartymove
	.4byte ScrCmd_buffermovename
	.4byte ScrCmd_bufferleadmonspeciesname
	.4byte ScrCmd_bufferpartymonnick
	.4byte ScrCmd_bufferitemname
	.4byte ScrCmd_bufferspeciesname
	.4byte ScrCmd_bufferdecorationname
	.4byte ScrCmd_buffernumberstring
	.4byte ScrCmd_bufferstdstring
	.4byte ScrCmd_bufferstring
	.4byte ScrCmd_pokemart
	.4byte ScrCmd_pokemartdecoration
	.4byte ScrCmd_pokemartdecoration2
	.4byte ScrCmd_playslotmachine
	.4byte ScrCmd_setberrytree
	.4byte ScrCmd_showcontestresults
	.4byte ScrCmd_startcontest
	.4byte ScrCmd_choosecontestmon
	.4byte ScrCmd_contestlinktransfer
	.4byte ScrCmd_random
	.4byte ScrCmd_givemoney
	.4byte ScrCmd_takemoney
	.4byte ScrCmd_checkmoney
	.4byte ScrCmd_showmoneybox
	.4byte ScrCmd_hidemoneybox
	.4byte ScrCmd_updatemoneybox
	.4byte ScrCmd_getpricereduction
	.4byte ScrCmd_fadescreen
	.4byte ScrCmd_fadescreenspeed
	.4byte ScrCmd_setflashradius
	.4byte ScrCmd_animateflash
	.4byte ScrCmd_messageautoscroll
	.4byte ScrCmd_dofieldeffect
	.4byte ScrCmd_setfieldeffectarg
	.4byte ScrCmd_waitfieldeffect
	.4byte ScrCmd_setrespawn
	.4byte ScrCmd_checkplayergender
	.4byte ScrCmd_playmoncry
	.4byte ScrCmd_setmetatile
	.4byte ScrCmd_doweather
	.4byte ScrCmd_setweather
	.4byte ScrCmd_resetweather
	.4byte ScrCmd_setstepcallback
	.4byte ScrCmd_setmaplayoutindex
	.4byte ScrCmd_setobjectpriority
	.4byte ScrCmd_resetobjectpriority
	.4byte ScrCmd_createvobject
	.4byte ScrCmd_turnvobject
	.4byte ScrCmd_opendoor
	.4byte ScrCmd_closedoor
	.4byte ScrCmd_waitmoncry
	.4byte ScrCmd_setdooropen
	.4byte ScrCmd_setdoorclosed
	.4byte ScrCmd_addelevmenuitem
	.4byte ScrCmd_drawbox
	.4byte ScrCmd_checkcoins
	.4byte ScrCmd_givecoins
	.4byte ScrCmd_takecoins
	.4byte ScrCmd_setwildbattle
	.4byte ScrCmd_dowildbattle
	.4byte ScrCmd_setvaddress
	.4byte ScrCmd_vgoto
	.4byte ScrCmd_vcall
	.4byte ScrCmd_vgoto_if
	.4byte ScrCmd_vcall_if
	.4byte ScrCmd_vmessage
	.4byte ScrCmd_vloadword
	.4byte ScrCmd_vbufferstring
	.4byte ScrCmd_showcoinsbox
	.4byte ScrCmd_hidecoinsbox
	.4byte ScrCmd_updatecoinsbox
	.4byte ScrCmd_incrementgamestat
	.4byte ScrCmd_setescapewarp
	.4byte ScrCmd_waitdooranim
	.4byte ScrCmd_bufferboxname
	.4byte ScrCmd_nop1
	.4byte ScrCmd_nop1
	.4byte ScrCmd_nop1
	.4byte ScrCmd_nop1
	.4byte ScrCmd_nop1
	.4byte ScrCmd_nop1
	.4byte ScrCmd_setmonobedient
	.4byte ScrCmd_checkmonobedience
	.4byte ScrCmd_gotoram
	.4byte ScrCmd_nop1
	.4byte ScrCmd_warpD1
	.4byte ScrCmd_setmonmetlocation
	.4byte ScrCmd_mossdeepgym1
	.4byte sub_0809B48C
	.4byte ScrCmd_mossdeepgym3
	.4byte ScrCmd_buffercontesttype
	.4byte ScrCmd_warpD7
	.4byte ScrCmd_cmdD8
	.4byte ScrCmd_cmdD9
	.4byte ScrCmd_mossdeepgym4
	.4byte ScrCmd_cmdDB
	.4byte ScrCmd_fadescreenswapbuffers
	.4byte ScrCmd_buffertrainerclassname
	.4byte ScrCmd_buffertrainername
	.4byte ScrCmd_pokenavcall
	.4byte ScrCmd_warpE0
	.globl gUnknown_81DAF30
gUnknown_81DAF30: @ 0x081DAF30
	.4byte ScrCmd_nop
	.globl gUnknown_81DAF34
	.globl gSpecialVars
gUnknown_81DAF34: @ 0x081DAF34
gSpecialVars:
	@ Script variables 0x8000..0x8015.
	@ EWRAM symbols are defined in sym_ewram_jp.txt.
	.4byte gSpecialVar_0x8000
	.4byte gSpecialVar_0x8001
	.4byte gSpecialVar_0x8002
	.4byte gSpecialVar_0x8003
	.4byte gSpecialVar_0x8004
	.4byte gSpecialVar_0x8005
	.4byte gSpecialVar_0x8006
	.4byte gSpecialVar_0x8007
	.4byte gSpecialVar_0x8008
	.4byte gSpecialVar_0x8009
	.4byte gSpecialVar_0x800A
	.4byte gSpecialVar_0x800B
	.4byte gSpecialVar_Facing
	.4byte gSpecialVar_Result
	.4byte gSpecialVar_ItemId
	.4byte gSpecialVar_LastTalked
	.4byte gSpecialVar_ContestRank
	.4byte gSpecialVar_ContestCategory
	.4byte gSpecialVar_MonBoxId
	.4byte gSpecialVar_MonBoxPos
	.4byte gSpecialVar_Unused_0x8014
	.4byte gTrainerBattleOpponent_A
	.globl gUnknown_81DAF8C
gUnknown_81DAF8C: @ 0x081DAF8C
	.4byte HealPlayerParty
	.4byte SetCableClubWarp
	.4byte sub_080AF244
	.4byte sub_080AF2F4
	.4byte CleanupLinkRoomState
	.4byte ExitLinkRoom
	.4byte SetPlayerSecretBase
	.4byte CheckPlayerHasSecretBase
	.4byte EnterSecretBase
	.4byte ClearAndLeaveSecretBase
	.4byte MoveOutOfSecretBase
	.4byte IsCurSecretBaseOwnedByAnotherPlayer
	.4byte GetCurSecretBaseRegistrationValidity
	.4byte ToggleCurSecretBaseRegistry
	.4byte ShowSecretBaseDecorationMenu
	.4byte ShowSecretBaseRegistryMenu
	.4byte PrepSecretBaseBattleFlags
	.4byte GetSecretBaseOwnerInteractionState
	.4byte InitSecretBaseDecorationSprites
	.4byte sub_08127DEC
	.4byte sub_08129798
	.4byte GetSecretBaseTypeInFrontOfPlayer
	.4byte SetSecretBaseOwnerGfxId
	.4byte sub_081296F0
	.4byte EnterNewlyCreatedSecretBase
	.4byte sub_080EAF54
	.4byte DoSecretBasePCTurnOffEffect
	.4byte RecordMixingPlayerSpotTriggered
	.4byte sub_080B2680
	.4byte sub_080B2728
	.4byte sub_080B2750
	.4byte CloseLink
	.4byte ColosseumPlayerSpotTriggered
	.4byte PlayerEnteredTradeSeat
	.4byte nullsub_37
	.4byte sub_080B2A00
	.4byte sub_080B2784
	.4byte GetLinkPartnerNames
	.4byte SpawnLinkPartnerEventObject
	.4byte SavePlayerParty
	.4byte LoadPlayerParty
	.4byte ChooseHalfPartyForBattle
	.4byte sp02A_crash_sound
	.4byte EventObjectInteractionGetBerryTreeData
	.4byte Bag_ChooseBerry
	.4byte EventObjectInteractionPlantBerryTree
	.4byte EventObjectInteractionPickBerryTree
	.4byte EventObjectInteractionRemoveBerryTree
	.4byte EventObjectInteractionWaterBerryTree
	.4byte PlayerHasBerries
	.4byte IsEnigmaBerryValid
	.4byte GetTrainerBattleMode
	.4byte ShowTrainerIntroSpeech
	.4byte ShowTrainerCantBattleSpeech
	.4byte GetTrainerFlag
	.4byte EndTrainerApproach
	.4byte SetUpTrainerEncounterMusic
	.4byte ShouldTryRematchBattle
	.4byte IsTrainerReadyForRematch
	.4byte BattleSetup_StartRematchBattle
	.4byte ShowPokemonStorageSystemPC
	.4byte HasEnoughMonsForDoubleBattle
	.4byte TurnOffTVScreen
	.4byte DoTVShow
	.4byte DoPokeNews
	.4byte special_0x44
	.4byte special_0x45
	.4byte InterviewBefore
	.4byte InterviewAfter
	.4byte sub_080F03E4
	.4byte SetContestCategoryStringVarForInterview
	.4byte special_0x4a
	.4byte TV_IsScriptShowKindAlreadyInQueue
	.4byte CheckForBigMovieOrEmergencyNewsOnTV
	.4byte GetMomOrDadStringForTVMessage
	.4byte ResetTVShowState
	.4byte sub_080F8BA4
	.4byte sub_080F8D34
	.4byte sub_080F90A4
	.4byte sub_080F8BD4
	.4byte sub_080F8C14
	.4byte sub_080F90E0
	.4byte sub_080F8B3C
	.4byte SetContestTrainerGfxIds
	.4byte sub_080F87C0
	.4byte sub_080F9200
	.4byte sub_080F938C
	.4byte sub_080F8B84
	.4byte sub_080F880C
	.4byte sub_080F888C
	.4byte sub_080F95B4
	.4byte GiveMonArtistRibbon
	.4byte sub_080B27AC
	.4byte SaveGame
	.4byte DoWateringBerryTreeAnim
	.4byte ShowEasyChatScreen
	.4byte sub_0811F3AC
	.4byte ScrSpecial_GetCurrentMauvilleMan
	.4byte ScrSpecial_HasBardSongBeenChanged
	.4byte ScrSpecial_SaveBardSongLyrics
	.4byte ScrSpecial_GetHipsterSpokenFlag
	.4byte ScrSpecial_SetHipsterSpokenFlag
	.4byte ScrSpecial_HipsterTeachWord
	.4byte ScrSpecial_PlayBardSong
	.4byte ScrSpecial_SetMauvilleOldManEventObjGfx
	.4byte ScrSpecial_GenerateGiddyLine
	.4byte ScrSpecial_GiddyShouldTellAnotherTale
	.4byte ScrSpecial_StorytellerInitializeRandomStat
	.4byte sub_0812148C
	.4byte ScrSpecial_StorytellerStoryListMenu
	.4byte ScrSpecial_StorytellerUpdateStat
	.4byte SanitizeReceivedEmeraldOldMan
	.4byte ScrSpecial_HasStorytellerAlreadyRecorded
	.4byte ScrSpecial_TraderMenuGetDecoration
	.4byte ScrSpecial_GetTraderTradedFlag
	.4byte ScrSpecial_DoesPlayerHaveNoDecorations
	.4byte sub_08133CD4
	.4byte CreateAvailableDecorationsMenu
	.4byte ScrSpecial_TraderDoDecorationTrade
	.4byte sub_080FA300
	.4byte sub_080FA31C
	.4byte sub_080FA358
	.4byte sub_080FA374
	.4byte TV_PutNameRaterShowOnTheAirIfNicknameChanged
	.4byte TV_CopyNicknameToStringVar1AndEnsureTerminated
	.4byte TV_CheckMonOTIDEqualsPlayerID
	.4byte BufferTrendyPhraseString
	.4byte TrendyPhraseIsOld
	.4byte sub_0811F44C
	.4byte GetDewfordHallPaintingNameIndex
	.4byte SwapRegisteredBike
	.4byte CalculatePlayerPartyCount
	.4byte CountPartyNonEggMons
	.4byte CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
	.4byte sub_080F9178
	.4byte sub_080F916C
	.4byte sub_080F90F4
	.4byte CountPlayerContestPaintings
	.4byte ShowContestWinner
	.4byte MauvilleGymSpecial2
	.4byte MauvilleGymSpecial1
	.4byte ShowFieldMessageStringVar4
	.4byte DrawWholeMapView
	.4byte StorePlayerCoordsInVars
	.4byte MauvilleGymSpecial3
	.4byte PetalburgGymSpecial1
	.4byte PetalburgGymSpecial2
	.4byte GetPlayerTrainerIdOnesDigit
	.4byte GetPlayerBigGuyGirlString
	.4byte GetRivalSonDaughterString
	.4byte SetFlagInVar
	.4byte CableCarWarp
	.4byte CableCar
	.4byte Overworld_PlaySpecialMapMusic
	.4byte StartWallClock
	.4byte Special_ViewWallClock
	.4byte ChooseStarter
	.4byte StartWallyTutorialBattle
	.4byte ChangePokemonNickname
	.4byte sub_081B9150
	.4byte sub_08136F64
	.4byte DoBerryBlending
	.4byte PlayRoulette
	.4byte ShouldMoveLilycoveFanClubMember
	.4byte GetNumMovedLilycoveFanClubMembers
	.4byte BufferStreakTrainerText
	.4byte sub_0813BA68
	.4byte UpdateMovedLilycoveFanClubMembers
	.4byte sub_0813BF84
	.4byte sub_0813BA98
	.4byte sub_0813BFA0
	.4byte RockSmashWildEncounter
	.4byte GabbyAndTyGetBattleNum
	.4byte GabbyAndTyAfterInterview
	.4byte GabbyAndTyBeforeInterview
	.4byte DoTVShowInSearchOfTrainers
	.4byte IsTVShowInSearchOfTrainersAiring
	.4byte GabbyAndTyGetLastQuote
	.4byte GabbyAndTyGetLastBattleTrivia
	.4byte GabbyAndTySetScriptVarsToEventObjectLocalIds
	.4byte GetBattleOutcome
	.4byte GetDaycareMonNicknames
	.4byte GetDaycareState
	.4byte RejectEggFromDayCare
	.4byte GiveEggFromDaycare
	.4byte SetDaycareCompatibilityString
	.4byte GetSelectedMonNickAndSpecies
	.4byte StoreSelectedPokemonInDaycare
	.4byte ChooseSendDaycareMon
	.4byte ShowDaycareLevelMenu
	.4byte GetNumLevelsGainedFromDaycare
	.4byte GetDaycareCost
	.4byte TakePokemonFromDaycare
	.4byte ScriptHatchMon
	.4byte EggHatch
	.4byte sub_0807101C
	.4byte ShowLinkBattleRecords
	.4byte IsEnoughForCostInVar0x8005
	.4byte SubtractMoneyFromVar0x8005
	.4byte ExecuteWhiteOut
	.4byte sp0C8_whiteout_maybe
	.4byte RotatingGate_InitPuzzle
	.4byte RotatingGate_InitPuzzleAndGraphics
	.4byte SetSSTidalFlag
	.4byte ResetSSTidalFlag
	.4byte EnterSafariMode
	.4byte ExitSafariMode
	.4byte GetPokeblockFeederInFront
	.4byte sub_08135958
	.4byte IsMirageIslandPresent
	.4byte UpdateShoalTideFlag
	.4byte InitBirchState
	.4byte ScriptGetPokedexInfo
	.4byte ShowPokedexRatingMessage
	.4byte DoLotteryCornerComputerEffect
	.4byte DoPCTurnOffEffect
	.4byte SetDepartmentStoreFloorVar
	.4byte DoPCTurnOnEffect
	.4byte EndLotteryCornerComputerEffect
	.4byte sub_081B91BC
	.4byte sub_081B932C
	.4byte sub_081B9410
	.4byte sub_081B93B8
	.4byte sub_081B9370
	.4byte TeachMoveRelearnerMove
	.4byte GetRecordedCyclingRoadResults
	.4byte Special_BeginCyclingRoadChallenge
	.4byte GetPlayerAvatarBike
	.4byte FinishCyclingRoadChallenge
	.4byte UpdateCyclingRoadState
	.4byte GetLeadMonFriendshipScore
	.4byte CallFrontierUtilFunc
	.4byte sub_08161E88
	.4byte sub_0818E608
	.4byte CallBattlePalaceFunction
	.4byte CopyEReaderTrainerGreeting
	.4byte DoSpecialTrainerBattle
	.4byte CallBattleArenaFunction
	.4byte CallBattleFactoryFunction
	.4byte CallBattlePikeFunction
	.4byte CallBattlePyramidFunction
	.4byte StopMapMusic
	.4byte sub_081B9654
	.4byte sub_081B9820
	.4byte sub_081B99A8
	.4byte sub_080F9D20
	.4byte ValidateEReaderTrainer
	.4byte GetBestBattleTowerStreak
	.4byte ReducePlayerPartyToSelectedMons
	.4byte BedroomPC
	.4byte PlayerPC
	.4byte FieldShowRegionMap
	.4byte GetInGameTradeSpeciesInfo
	.4byte CreateInGameTradePokemon
	.4byte DoInGameTradeScene
	.4byte GetTradeSpecies
	.4byte GetWeekCount
	.4byte RetrieveLotteryNumber
	.4byte PickLotteryCornerTicket
	.4byte ShowBerryBlenderRecordWindow
	.4byte SetTrickHouseEndRoomFlag
	.4byte ResetTrickHouseEndRoomFlag
	.4byte sub_080E1850
	.4byte AccessHallOfFamePC
	.4byte Special_ShowDiploma
	.4byte CheckLeadMonCool
	.4byte CheckLeadMonBeauty
	.4byte CheckLeadMonCute
	.4byte CheckLeadMonSmart
	.4byte CheckLeadMonTough
	.4byte sub_080FC014
	.4byte DoSoftReset
	.4byte GameClear
	.4byte ShakeScreenInElevator
	.4byte nullsub_55
	.4byte SpawnCameraObject
	.4byte RemoveCameraObject
	.4byte GetPokeblockNameByMonNature
	.4byte GetSecretBaseNearbyMapName
	.4byte CheckRelicanthWailord
	.4byte ShouldDoBrailleRegirockEffectOld
	.4byte sub_080AFE30
	.4byte sub_080AFE88
	.4byte WaitWeather
	.4byte BufferEReaderTrainerName
	.4byte GetSlotMachineId
	.4byte GetPlayerFacingDirection
	.4byte FoundAbandonedShipRoom1Key
	.4byte FoundAbandonedShipRoom2Key
	.4byte FoundAbandonedShipRoom4Key
	.4byte FoundAbandonedShipRoom6Key
	.4byte LeadMonHasEffortRibbon
	.4byte GiveLeadMonEffortRibbon
	.4byte Special_AreLeadMonEVsMaxedOut
	.4byte sub_08097EFC
	.4byte sub_08097F24
	.4byte InitRoamer
	.4byte TryUpdateRusturfTunnelState
	.4byte IsGrassTypeInParty
	.4byte sub_080AF55C
	.4byte PutZigzagoonInPlayerParty
	.4byte IsStarterInParty
	.4byte DeleteRegistry_Yes
	.4byte ScriptCheckFreePokemonStorageSpace
	.4byte DoSealedChamberShakingEffect1
	.4byte sub_08139BD4
	.4byte GetShieldToyTVDecorationInfo
	.4byte IsPokerusInParty
	.4byte SetSootopolisGymCrackedIceMetatiles
	.4byte sub_081395D0
	.4byte StartGroudonKyogreBattle
	.4byte BattleSetup_StartLegendaryBattle
	.4byte StartRegiBattle
	.4byte SetUpTrainerMovement
	.4byte DoSealedChamberShakingEffect2
	.4byte FoundBlackGlasses
	.4byte StartDroughtWeatherBlend
	.4byte DoDiveWarp
	.4byte DoFallWarp
	.4byte ShowContestEntryMonPic
	.4byte sub_080F9748
	.4byte SetEReaderTrainerGfxId
	.4byte BattleSetup_StartLatiBattle
	.4byte SetRoute119Weather
	.4byte SetRoute123Weather
	.4byte ScriptGetMultiplayerId
	.4byte ScriptGetPartyMonSpecies
	.4byte sub_081B957C
	.4byte nullsub_54
	.4byte MoveOutOfSecretBaseFromOutside
	.4byte LoadPlayerBag
	.4byte sub_080AFEB0
	.4byte SetPacifidlogTMReceivedDay
	.4byte GetDaysUntilPacifidlogTMAvailable
	.4byte HasAllHoennMons
	.4byte MonOTNameMatchesPlayer
	.4byte BufferLottoTicketNumber
	.4byte sub_08165248
	.4byte sub_080F9C00
	.4byte ScriptRandom
	.4byte sub_081AFAA8
	.4byte sub_080EE808
	.4byte sub_080EEDEC
	.4byte sub_080EF244
	.4byte sub_080EF2D8
	.4byte nullsub_55
	.4byte PutFanClubSpecialOnTheAir
	.4byte sub_080EF814
	.4byte sub_080EF838
	.4byte sub_080EBD4C
	.4byte SetSecretBaseSecretsTvFlags_SandOrnament
	.4byte sub_080EBEA0
	.4byte GetSecretBaseName
	.4byte sub_080EBF08
	.4byte CopyCurSecretBaseOwnerName_StrVar1
	.4byte sub_080EBE30
	.4byte sub_080EBE68
	.4byte SetSecretBaseSecretsTvFlags_MiscFurnature
	.4byte SetSecretBaseSecretsTvFlags_LargeDecorationSpot
	.4byte SetSecretBaseSecretsTvFlags_SmallDecorationSpot
	.4byte SetSecretBaseSecretsTvFlags_Poster
	.4byte sub_0818D6EC
	.4byte sub_0818D818
	.4byte sub_0818D914
	.4byte sub_0818D958
	.4byte sub_0818D98C
	.4byte sub_0818D9E4
	.4byte sub_0818DA30
	.4byte sub_0818DA60
	.4byte sub_0818DA84
	.4byte sub_0818DB50
	.4byte sub_0818DB68
	.4byte sub_0818DBAC
	.4byte sub_0818DBE8
	.4byte sub_0818DD44
	.4byte sub_0818DD78
	.4byte sub_0818DF34
	.4byte sub_0811B0A8
	.4byte sub_0818DF58
	.4byte sub_0818DF64
	.4byte sub_0818DFB4
	.4byte sub_0818DFD8
	.4byte sub_0818DEF4
	.4byte sub_0818DFF8
	.4byte sub_0818E018
	.4byte sub_0818E03C
	.4byte sub_0818E08C
	.4byte sub_0818E0D8
	.4byte sub_0818E0EC
	.4byte sub_081398CC
	.4byte sub_0818E100
	.4byte sub_0818E16C
	.4byte sub_0818E194
	.4byte sub_0818DED0
	.4byte sub_0818E048
	.4byte sub_0818E53C
	.4byte sub_0818E510
	.4byte sub_0818E570
	.4byte sub_0818E588
	.4byte sub_0818E59C
	.4byte sub_0818E5BC
	.4byte sub_0818E5EC
	.4byte PutLilycoveContestLadyShowOnTheAir
	.4byte sub_0813B8B8
	.4byte CallApprenticeFunction
	.4byte ShouldTryGetTrainerScript
	.4byte ShowMapNamePopup
	.4byte ShowMapNamePopup
	.4byte DoMirageTowerCeilingCrumble
	.4byte SetMirageTowerVisibility
	.4byte StartPlayerDescendMirageTower
	.4byte sub_08139938
	.4byte IsWirelessAdapterConnected
	.4byte BerryBlenderLinkBecomeLeader
	.4byte BerryBlenderLinkJoinGroup
	.4byte UnionRoomSpecial
	.4byte sub_08019EE4
	.4byte sub_08016448
	.4byte sp182_move_string
	.4byte sub_0801DA30
	.4byte sub_081B85F8
	.4byte sub_08017B4C
	.4byte sub_08139980
	.4byte ValidateReceivedWonderCard
	.4byte HasAtLeastOneBerry
	.4byte sub_0802C614
	.4byte sub_0802E0BC
	.4byte sub_0802781C
	.4byte sub_0802786C
	.4byte sub_081399F4
	.4byte sub_08139A68
	.4byte sub_08139DD4
	.4byte sub_080F98EC
	.4byte sub_0800AFEC
	.4byte sub_080F996C
	.4byte sub_080F999C
	.4byte sub_080F99F0
	.4byte ShowRankingHallRecordsWindow
	.4byte ScrollRankingHallRecordsWindow
	.4byte sub_08139F5C
	.4byte sub_080F99C4
	.4byte sub_080F99E4
	.4byte sub_080B27D4
	.4byte sub_0813A164
	.4byte sub_0813A638
	.4byte sub_0813A0BC
	.4byte sub_081C62AC
	.4byte sub_081C472C
	.4byte sub_081B9280
	.4byte sub_081B92C0
	.4byte sub_0813A774
	.4byte sub_0813A7C0
	.4byte sub_0813A904
	.4byte sub_0813A98C
	.4byte sub_0813A9D4
	.4byte sub_0813AA1C
	.4byte sub_0813A9F0
	.4byte sub_0813AA50
	.4byte sub_0813AA64
	.4byte sub_0813AA90
	.4byte DisplayBerryPowderVendorMenu
	.4byte RemoveBerryPowderVendorMenu
	.4byte HasEnoughBerryPowder
	.4byte TakeBerryPowder
	.4byte PrintPlayerBerryPowderAmount
	.4byte sub_0813A828
	.4byte sub_0813A85C
	.4byte sub_0813B810
	.4byte sub_081C6A64
	.4byte convert_pixel_width_to_tile_width
	.4byte CountPlayerTrainerStars
	.4byte sub_0813ACC8
	.4byte sub_0813ADF0
	.4byte sub_0813AE0C
	.4byte sub_081B85CC
	.4byte sub_0813AEEC
	.4byte sub_0813AF80
	.4byte DoDeoxysRockInteraction
	.4byte sub_0813B208
	.4byte CreateObedientEnemyMon
	.4byte StartMirageTowerDisintegration
	.4byte StartMirageTowerFossilFallAndSink
	.4byte StartMirageTowerShake
	.4byte ChangeBoxPokemonNickname
	.4byte get_unknown_box_id
	.4byte sub_0813B254
	.4byte SetMatchCallRegisteredFlag
	.4byte sub_08175184
	.4byte CreateUnusualWeatherEvent
	.4byte GetUnusualWeatherMapNameAndType
	.4byte sub_0813B4C8
	.4byte sub_080A0194
	.4byte Unused_SetWeatherSunny
	.4byte sub_081AFA78
	.4byte sub_0813B518
	.4byte ShouldDoBrailleRegicePuzzle
	.4byte EnableNationalPokedex
	.4byte display_text_and_get_width_internal
	.4byte sub_080E1D6C
	.4byte TurnOnTVScreen
	.4byte sub_081D4110
	.4byte sub_0813B54C
	.4byte sub_0813B5A0
	.4byte sub_0813B56C
	.4byte CallTrainerHillFunction
	.4byte sub_0813B810
	.4byte sub_0813B844
	.4byte sub_081D426C
	.4byte sub_08022230
	.4byte TryBufferWaldaPhrase
	.4byte DoWaldaNamingScreen
	.4byte TryGetWallpaperWithWaldaPhrase
	.4byte sub_08139F0C
	.4byte sub_0813B9A0
	.4byte sub_080F9424
	.4byte ShowTrainerHillRecords
	.4byte sub_080B3F60
	.4byte sub_0813B9D8
	.4byte sub_081B95B8
	.4byte sub_08071CF0
	.4byte TryPrepareSecondApproachingTrainer
	.4byte RemoveRecordsWindow
	.4byte sub_08139C4C
	.4byte sub_080B331C
	.globl gUnknown_81DB7BC
gUnknown_81DB7BC: @ 0x081DB7BC
	.globl gStdScripts
gStdScripts:
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
MapScripts_JP_081DBFD3: @ 0x081DBFD3
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081DBFDE
	.byte 0x02
	.4byte MapScriptTable_JP_081DC084
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
MapScriptTable_JP_081DC084: @ 0x081DC084
	@ conditional map script table
	.2byte 0x40D2, 0x0001
	.4byte EventScript_JP_081DC08E
	.2byte 0
EventScript_JP_081DC08E: @ 0x081DC08E
	lockall
	@ event command: addobject
	.byte 0x55
	.2byte 0x0023
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081DC11A @ Movement_JP_081DC11A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0023
	.4byte 0x081DC11E @ Movement_JP_081DC11E
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1DD7F5
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0023
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	delay 0x003C
	loadword 0x00, gText_Rom_1DD864
	callstd 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0023
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
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
	.byte 0x4F
	.2byte 0x0023
	.4byte 0x081DC126 @ Movement_JP_081DC126
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0023
	setobjectxyperm 0x0023, 0x000A, 0x000C
	setobjectmovementtype 0x0023, 0x08
	clearflag 0x4000
	setvar 0x40D2, 0x0002
	addvar 0x40D1, 0x0001
	releaseall
	end
Movement_JP_081DC11A: @ 0x081DC11A
	@ object movement sequence
	delay_16
	delay_8
	walk_in_place_fastest_left
	step_end
Movement_JP_081DC11E: @ 0x081DC11E
	@ object movement sequence
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
Movement_JP_081DC126: @ 0x081DC126
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
EventScript_JP_081DC12F: @ 0x081DC12F
	lock
	faceplayer
	message gText_Rom_1DC9BE
	waitmessage
	pokemart 0x081DC148
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x40, 0x00, 0x41, 0x00, 0x42, 0x00, 0x46, 0x00, 0x43, 0x00, 0x3F, 0x00, 0x00, 0x00
	.byte 0x6C, 0x02
EventScript_JP_081DC158: @ 0x081DC158
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
	.byte 0x25
	.2byte 0x0124
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
EventScript_JP_081DC2AA: @ 0x081DC2AA
	loadword 0x00, gText_Rom_1DD3F8
	callstd 0x03
	end
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
EventScript_JP_081DC2E4: @ 0x081DC2E4
	loadword 0x00, gText_Rom_1DD4CC
	callstd 0x03
	end
EventScript_JP_081DC2ED: @ 0x081DC2ED
	loadword 0x00, gText_Rom_1DD4F1
	callstd 0x03
	end
EventScript_JP_081DC2F6: @ 0x081DC2F6
	loadword 0x00, gText_Rom_1DD51D
	callstd 0x03
	end
EventScript_JP_081DC2FF: @ 0x081DC2FF
	loadword 0x00, gText_Rom_1DD53C
	callstd 0x03
	end
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
EventScript_JP_081DC326: @ 0x081DC326
	loadword 0x00, gText_Rom_1DD5D6
	callstd 0x03
	end
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
EventScript_JP_081DC350: @ 0x081DC350
	loadword 0x00, gText_Rom_1DCFF4
	callstd 0x02
	end
EventScript_JP_081DC359: @ 0x081DC359
	loadword 0x00, gText_Rom_1DCF33
	callstd 0x02
	end
EventScript_JP_081DC362: @ 0x081DC362
	loadword 0x00, gText_Rom_1DCF68
	callstd 0x02
	end
EventScript_JP_081DC36B: @ 0x081DC36B
	loadword 0x00, gText_Rom_1DCFAA
	callstd 0x02
	end
EventScript_JP_081DC374: @ 0x081DC374
	loadword 0x00, gText_Rom_1DD037
	callstd 0x02
	end
EventScript_JP_081DC37D: @ 0x081DC37D
	lock
	faceplayer
	loadword 0x00, gText_Rom_1DCD3C
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_081DC394: @ 0x081DC394
	lock
	faceplayer
	loadword 0x00, gText_Rom_1DCD5B
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0012
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_081DC3AB: @ 0x081DC3AB
	lock
	faceplayer
	loadword 0x00, gText_Rom_1DCD8E
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0013
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_081DC3C2: @ 0x081DC3C2
	lock
	faceplayer
	loadword 0x00, gText_Rom_1DCDBF
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x001A
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_081DC3D9: @ 0x081DC3D9
	lock
	faceplayer
	loadword 0x00, gText_Rom_1DCDF2
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x001B
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_081DC3F0: @ 0x081DC3F0
	lock
	faceplayer
	loadword 0x00, gText_Rom_1DCE19
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x001C
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_081DC407: @ 0x081DC407
	lock
	faceplayer
	loadword 0x00, gText_Rom_1DCE2D
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x001D
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_081DC41E: @ 0x081DC41E
	lock
	faceplayer
	loadword 0x00, gText_Rom_1DCE55
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x001E
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_081DC435: @ 0x081DC435
	lock
	faceplayer
	playse 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x001F
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x001F
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1DCE75
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x001F
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x001F
	.4byte 0x081DC4BB @ Movement_JP_081DC4BB
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x001F
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1DCE7F
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x001F
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x001F
	.4byte 0x081DC4BB @ Movement_JP_081DC4BB
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1DCEA7
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x001F
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x001F
	.4byte 0x081DC4BB @ Movement_JP_081DC4BB
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x001F
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
Movement_JP_081DC4BB: @ 0x081DC4BB
	@ object movement sequence
	delay_16
	delay_16
	step_end
EventScript_JP_081DC4BE: @ 0x081DC4BE
	loadword 0x00, gText_Rom_1DCECA
	callstd 0x03
	end
EventScript_JP_081DC4C7: @ 0x081DC4C7
	lock
	faceplayer
	loadword 0x00, gText_Rom_1DCEF9
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0021
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_081DC4DE: @ 0x081DC4DE
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemartdecoration 0x081DC4F8
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x00, 0x5F, 0x00, 0x4E, 0x00, 0x60, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_081DC502: @ 0x081DC502
	loadword 0x00, gText_Rom_243B96
	callstd 0x04
	release
	end
EventScript_JP_081DC50C: @ 0x081DC50C
	lock
	faceplayer
	checkflag 0x0060
	goto_if 0x00, EventScript_JP_081DC502
	message gText_Rom_24390F
	waitmessage
	pokemartdecoration 0x081DC52C
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x19, 0x00, 0x1B, 0x00, 0x1A, 0x00, 0x1C, 0x00, 0x1D, 0x00, 0x1E, 0x00, 0x33, 0x00, 0x34, 0x00
	.byte 0x35, 0x00, 0x36, 0x00, 0x37, 0x00, 0x38, 0x00, 0x39, 0x00, 0x3A, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_081DC54C: @ 0x081DC54C
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemart 0x081DC564
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x2A, 0x01, 0x4B, 0x01, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_081DC56C: @ 0x081DC56C
	lockall
	loadword 0x00, gText_Rom_1DD1E8
	callstd 0x04
	loadword 0x00, gText_Rom_1DD20D
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	delay 0x000A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	delay 0x0019
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x081DC6B0 @ Movement_JP_081DC6B0
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081DC6BE @ Movement_JP_081DC6BE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081DC68D @ Movement_JP_081DC68D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x081DC69A @ Movement_JP_081DC69A
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000A
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0009
	loadword 0x00, gText_Rom_1DD26B
	callstd 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1DD29D
	callstd 0x04
	playbgm 0x01A3, 0x00
	loadword 0x00, gText_Rom_1DD316
	callstd 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081DC67D @ Movement_JP_081DC67D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x08243619
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x081DC685 @ Movement_JP_081DC685
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1DD395
	callstd 0x04
	playse 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1DD3C8
	callstd 0x04
	loadword 0x00, gText_Rom_1DD3E6
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x081DC6AB @ Movement_JP_081DC6AB
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081DC6B8 @ Movement_JP_081DC6B8
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000B
	clearflag 0x0349
	clearflag 0x0350
	clearflag 0x034D
	clearflag 0x034E
	setvar 0x4058, 0x0002
	@ event command: warp
	.byte 0x39
	.byte 0x09
	.byte 0x09
	.byte 0xFF
	.2byte 0x000B
	.2byte 0x000E
	.byte 0x27, 0x6B, 0x02
Movement_JP_081DC67D: @ 0x081DC67D
	@ object movement sequence
	delay_16
	delay_16
	emote_question_mark
	walk_in_place_fastest_right
	delay_16
	delay_16
	walk_in_place_fastest_left
	step_end
Movement_JP_081DC685: @ 0x081DC685
	@ object movement sequence
	emote_question_mark
	walk_in_place_fastest_up
	delay_16
	walk_in_place_fastest_down
	delay_16
	delay_16
	walk_in_place_fastest_left
	step_end
Movement_JP_081DC68D: @ 0x081DC68D
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
Movement_JP_081DC69A: @ 0x081DC69A
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
	.byte 0x08, 0x26, 0xFE
Movement_JP_081DC6AB: @ 0x081DC6AB
	@ object movement sequence
	walk_right
	walk_up
	walk_up
	set_invisible
	step_end
Movement_JP_081DC6B0: @ 0x081DC6B0
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_down
	walk_left
	step_end
Movement_JP_081DC6B8: @ 0x081DC6B8
	@ object movement sequence
	walk_in_place_fastest_right
	delay_16
	delay_16
	walk_right
	walk_up
	step_end
Movement_JP_081DC6BE: @ 0x081DC6BE
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
EventScript_JP_081DC6C7: @ 0x081DC6C7
	loadword 0x00, gText_Rom_1DD1AB
	callstd 0x03
	end
EventScript_JP_081DC6D0: @ 0x081DC6D0
	loadword 0x00, gText_Rom_1DD1C1
	callstd 0x03
	end
EventScript_JP_081DC6D9: @ 0x081DC6D9
	loadword 0x00, gText_Rom_1DCA81
	callstd 0x02
	end
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
	setvar 0x8004, 0x0001
	specialvar_ 0x800D, 0x01CE
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081DC734
	loadword 0x00, gText_Rom_1DD723
	callstd 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x01CC
	goto EventScript_JP_081DC73E
	.byte 0x02
EventScript_JP_081DC734: @ 0x081DC734
	loadword 0x00, gText_Rom_1DD69F
	callstd 0x04
	release
	end
EventScript_JP_081DC73E: @ 0x081DC73E
	message gText_Rom_1DD734
	waitmessage
	setvar 0x8004, 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x01BB
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
	bufferitemname 0x00, 0x001E
	setvar 0x8008, 0x001E
	setvar 0x8009, 0x0032
	goto EventScript_JP_081DC8CB
	.byte 0x02
EventScript_JP_081DC7F6: @ 0x081DC7F6
	bufferitemname 0x00, 0x001F
	setvar 0x8008, 0x001F
	setvar 0x8009, 0x0050
	goto EventScript_JP_081DC8CB
	.byte 0x02
EventScript_JP_081DC80A: @ 0x081DC80A
	bufferitemname 0x00, 0x0020
	setvar 0x8008, 0x0020
	setvar 0x8009, 0x0032
	goto EventScript_JP_081DC8CB
	.byte 0x02
EventScript_JP_081DC81E: @ 0x081DC81E
	bufferitemname 0x00, 0x0021
	setvar 0x8008, 0x0021
	setvar 0x8009, 0x012C
	goto EventScript_JP_081DC8CB
	.byte 0x02
EventScript_JP_081DC832: @ 0x081DC832
	bufferitemname 0x00, 0x0040
	setvar 0x8008, 0x0040
	setvar 0x8009, 0x03E8
	goto EventScript_JP_081DC8CB
	.byte 0x02
EventScript_JP_081DC846: @ 0x081DC846
	bufferitemname 0x00, 0x0041
	setvar 0x8008, 0x0041
	setvar 0x8009, 0x03E8
	goto EventScript_JP_081DC8CB
	.byte 0x02
EventScript_JP_081DC85A: @ 0x081DC85A
	bufferitemname 0x00, 0x0042
	setvar 0x8008, 0x0042
	setvar 0x8009, 0x03E8
	goto EventScript_JP_081DC8CB
	.byte 0x02
EventScript_JP_081DC86E: @ 0x081DC86E
	bufferitemname 0x00, 0x0043
	setvar 0x8008, 0x0043
	setvar 0x8009, 0x03E8
	goto EventScript_JP_081DC8CB
	.byte 0x02
EventScript_JP_081DC882: @ 0x081DC882
	bufferitemname 0x00, 0x0046
	setvar 0x8008, 0x0046
	setvar 0x8009, 0x03E8
	goto EventScript_JP_081DC8CB
	.byte 0x02
EventScript_JP_081DC896: @ 0x081DC896
	bufferitemname 0x00, 0x003F
	setvar 0x8008, 0x003F
	setvar 0x8009, 0x03E8
	goto EventScript_JP_081DC8CB
	.byte 0x02
EventScript_JP_081DC8AA: @ 0x081DC8AA
	bufferitemname 0x00, 0x0045
	setvar 0x8008, 0x0045
	setvar 0x8009, 0x0BB8
	goto EventScript_JP_081DC8CB
	.byte 0x02
EventScript_JP_081DC8BE: @ 0x081DC8BE
	loadword 0x00, gText_Rom_1DD7BB
	callstd 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x01CD
	release
	end
EventScript_JP_081DC8CB: @ 0x081DC8CB
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
	.byte 0x25
	.2byte 0x01CF
	@ event command: special
	.byte 0x25
	.2byte 0x01D0
	loadword 0x00, gText_Rom_1DD769
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081DC73E
	loadword 0x00, gText_Rom_1DD7A5
	callstd 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x01CD
	release
	end
EventScript_JP_081DC935: @ 0x081DC935
	loadword 0x00, gText_Rom_243947
	callstd 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x01CD
	release
	end
EventScript_JP_081DC942: @ 0x081DC942
	loadword 0x00, gText_Rom_1DD753
	callstd 0x04
	goto EventScript_JP_081DC73E
	.byte 0x02
EventScript_JP_081DC950: @ 0x081DC950
	lockall
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243635
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	opendoor 0x000A, 0x000C
	waitdooranim
	@ event command: addobject
	.byte 0x55
	.2byte 0x0023
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081DC9A4 @ Movement_JP_081DC9A4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0023
	.4byte 0x081DC9AB @ Movement_JP_081DC9AB
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	closedoor 0x000A, 0x000C
	waitdooranim
	loadword 0x00, gText_Rom_1DD93E
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081DC9A8 @ Movement_JP_081DC9A8
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0023
	.4byte 0x081DC9AE @ Movement_JP_081DC9AE
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0023
	addvar 0x40D1, 0x0001
	setvar 0x40D2, 0x0003
	releaseall
	end
Movement_JP_081DC9A4: @ 0x081DC9A4
	@ object movement sequence
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end
Movement_JP_081DC9A8: @ 0x081DC9A8
	@ object movement sequence
	delay_16
	walk_in_place_fastest_right
	step_end
Movement_JP_081DC9AB: @ 0x081DC9AB
	@ object movement sequence
	delay_8
	walk_down
	step_end
Movement_JP_081DC9AE: @ 0x081DC9AE
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
EventScript_JP_081DC9B7: @ 0x081DC9B7
	lockall
	@ event command: special
	.byte 0x25
	.2byte 0x01FC
	waitstate
	releaseall
	end

